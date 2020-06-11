// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unistd.h>

using namespace std;

#include "base/util.h"
#include "dictionary/user_dictionary.h"
#include "dictionary/user_dictionary_util.h"
#include "dictionary/user_dictionary_storage.h"
#include "dictionary/user_dictionary_importer.h"

//#undef MOZC_DICTIONARY_POS_MAP_H_
//#define kPOSMap kPOSMap2
//#define MOZC_DICTIONARY_POS_MAP_H_

class MozcDict {
  public:
    MozcDict();
    void set_entry(string key, string value, string pos, string comment);
    void set_entry_with_dic(string dic_name, string key, string value, string pos, string comment);
    void debug_print();
    bool save();
    int delete_dic(string name);
    int  import(string name, char* file_name);
    int  export_dic(string name, string file_name);
    void clear(string name);

  protected:
    int dic_num();
    int new_dic(string name);
    mozc::UserDictionaryStorage::UserDictionary* get_dic(string name);

  private:
    mozc::UserDictionaryStorage* stor;
};
inline int MozcDict::dic_num() {return stor->dictionaries_size();}

MozcDict::MozcDict() {
    string name = mozc::UserDictionaryUtil::GetUserDictionaryFileName();
    stor = new mozc::UserDictionaryStorage(name);
    stor->Load();
}

mozc::UserDictionaryStorage::UserDictionary* MozcDict::get_dic(string name) {
    for (int i = 0; i < dic_num(); i++) {
        mozc::UserDictionaryStorage::UserDictionary* dic =
                stor->mutable_dictionaries(i);
        if (dic->name() == name) return dic;
    }
    return NULL;
}

void MozcDict::set_entry_with_dic(string dic_name, string key, string value, string pos, string comment) {
    mozc::UserDictionaryStorage::UserDictionary* dic = get_dic(dic_name);//NULL;
//    for (int i = 0; i < dic_num(); i++) {
//        dic = stor->mutable_dictionaries(i);
//        if (dic->name() == dic_name) break;
//    }
    if (dic == NULL) {
        if (new_dic(dic_name)) return;
        dic = get_dic(dic_name);
    }
    mozc::UserDictionaryStorage::UserDictionaryEntry from, to;
    from.set_key(key);
    from.set_value(value);
    from.set_pos(pos);
    if (!mozc::UserDictionaryImporter::ConvertEntry(from, &to)) {
        cerr << "Invalid POS Error - " << pos << endl;
        return;
    }
    mozc::UserDictionaryStorage::UserDictionaryEntry* entry =
            dic->add_entries();
    if (entry == NULL) return;
    entry->set_key(key);
    entry->set_value(value);
    entry->set_pos(to.pos());
    entry->set_comment(comment);
}

void MozcDict::set_entry(string key, string value, string pos, string comment) {
    string dic_name = "ユーザー辞書 1";
    if (dic_num() >= 1)
        dic_name = stor->mutable_dictionaries(0)->name();
    set_entry_with_dic(dic_name, key, value, pos, comment);
    return;
    if (dic_num() < 1)
        if (new_dic("ユーザー辞書 1")) return;

    mozc::UserDictionaryStorage::UserDictionary* dic =
            stor->mutable_dictionaries(0);
    if (dic == NULL) return;

    mozc::UserDictionaryStorage::UserDictionaryEntry from, to;
    from.set_key(key);
    from.set_value(value);
    from.set_pos(pos);
    if (!mozc::UserDictionaryImporter::ConvertEntry(from, &to)) {
        cerr << "Invalid POS Error - " << pos << endl;
        return;
    }
    mozc::UserDictionaryStorage::UserDictionaryEntry* entry =
            dic->add_entries();
    if (entry == NULL) return;
    entry->set_key(key);
    entry->set_value(value);
    entry->set_pos(to.pos());
    entry->set_comment(comment);
}

namespace {
uint64 CreateID() {
  uint64 id = 0;

  // dic_id == 0 is used as a magic number
  while (id == 0) {
    if (!mozc::Util::GetSecureRandomSequence(
            reinterpret_cast<char *>(&id), sizeof(id))) {
      LOG(ERROR) << "GetSecureRandomSequence() failed. use rand()";
      id = static_cast<uint64>(rand());
    }
  }

  return id;
}
}

void MozcDict::debug_print() {
    for (int i = 0; i < dic_num(); i++) {
        mozc::UserDictionaryStorage::UserDictionary* dic =
                stor->mutable_dictionaries(i);
        if (dic == NULL) continue;
        cout << "name = " << dic->name() << endl;
        for (int j = 0; j < dic->entries_size(); j ++) {
            mozc::UserDictionaryStorage::UserDictionaryEntry* entry =
                    dic->mutable_entries(j);
            if (entry == NULL) continue;
            cout << "\t" << entry->key() << "\t" << entry->value()
                 << "\t" << entry->pos() << "\t" << entry->comment() << endl;
        }
    }
}

int MozcDict::new_dic(string name) {
    mozc::UserDictionaryStorage::UserDictionary* dic = stor->add_dictionaries();
    if (dic == NULL) return 1;
    dic->set_name(name);
    dic->set_id(CreateID());
    return 0;
}

bool MozcDict::save() {
    if (stor->Lock()) {
        stor->Save();
        stor->UnLock();
        return true;
    }
    return false;
}

int reboot() {
    const char *path = "/usr/bin/ibus-daemon";
    char *const argv[] = {
        (char *)"/usr/bin/ibus-daemon",
        (char *)"-xrd",
        (char *)NULL
    };

    return execv(path, argv);
}
 
void MozcDict::clear(string name) {
    mozc::UserDictionaryStorage::UserDictionary* dic = get_dic(name);
    if (dic) dic->clear_entries();
}

int MozcDict::import(string name, char* file_name) {
    mozc::UserDictionaryStorage::UserDictionary* dic = get_dic(name);
    if (dic == NULL) {
        new_dic(name);
        dic = get_dic(name);
    }

    ifstream is;
    is.open(file_name, ios::binary);
    if (is.fail()) {
        cerr << "Open Error - " << file_name << endl;
        return -1;
    }
    is.seekg(0, ios::end);
    streampos len = is.tellg();
    is.seekg(0, ios::beg);
    char *input = new char[len];
    is.read(input, len);
    is.close();

    mozc::UserDictionaryImporter::EncodingType type =
            mozc::UserDictionaryImporter::GuessEncodingType(input, len);
    string output;
    if (type == mozc::UserDictionaryImporter::UTF8) {
        output += input;
    } else if (type == mozc::UserDictionaryImporter::SHIFT_JIS) {
        mozc::Util::SJISToUTF8(input, &output);
        if (output == "") {
            cerr << "Convert Error" << endl;
            delete[] input;
            return -1;
        }
    } else {
        cerr << "Not Implemented Encode Type" << endl;
        delete[] input;
        return -1;
    }

    istringstream ss(output);
    mozc::UserDictionaryImporter::IStreamTextLineIterator iter(&ss);
    mozc::UserDictionaryImporter::ErrorType error =
    mozc::UserDictionaryImporter::ImportFromTextLineIterator(
            mozc::UserDictionaryImporter::IME_AUTO_DETECT, &iter, dic);

    delete[] input;
    return error;
}

int MozcDict::delete_dic(string name) {
    for (int i = 0; i < dic_num(); i++) {
        mozc::UserDictionaryStorage::UserDictionary* dic =
                stor->mutable_dictionaries(i);
        if (dic->name() == name) {
            if (dic->id() == 0)
                dic->set_id(CreateID());
            stor->DeleteDictionary(dic->id());
            return 0;
        }
    }
    return -1;
}

int MozcDict::export_dic(string name, const string file_name) {
    for (int i = 0; i < dic_num(); i++) {
        mozc::UserDictionaryStorage::UserDictionary* dic =
                stor->mutable_dictionaries(i);
        if (dic->name() == name) {
            if (dic->id() == 0)
                dic->set_id(CreateID());
            stor->ExportDictionary(dic->id(), file_name);
            return 0;
        }
    }
    return -1;
}

void print_help() {
    cout << "Usage:" << endl;
    cout << "    mozc-dict [ -h | -a | -swd ARGS | -s ARGS |" << endl;
    cout << "                -D ARG | -i ARGS  | -e ARGS | -c ARG | -r | -l ]" << endl;
    cout << "        -h                      - ヘルプを表示する" << endl;
    cout << "        -a                      - 辞書の内容をすべて表示する" << endl;
    cout << "        -swd <辞書名> <よみ> <単語> <品詞> - 指定した辞書に単語を登録する" << endl;
    cout << "        -s <よみ> <単語> <品詞> - 単語を登録する" << endl;
    cout << "        -D <辞書名>             - 辞書を削除する" << endl;
    cout << "        -i <辞書名> <辞書ファイル名>" << endl;
    cout << "                                - 辞書ファイルをインポートする" << endl;
    cout << "                                - ファイルはUTF-8文字コード・TAB区切り" << endl;
    cout << "        -e <辞書名> <辞書ファイル名>" << endl;
    cout << "                                - 辞書ファイルをエクスポートする" << endl;
    cout << "        -c <辞書名>             - <辞書名> で指定した内部辞書をクリアする" << endl;
    cout << "        -r                      - 強制的に再起動する" << endl;
    cout << "        -l                      - 有効な品詞のリストを表示する" << endl;
}

namespace {
struct POSMap {
    const char *a;
    const char *b;
};
// #include "dictionary/pos_map.h"
#include "dictionary/pos_map.inc"
}
#include <set>

void list_pos() {
    set<string> ss;
    for (int i = 0; i < arraysize(kPOSMap); i++)
        if (kPOSMap[i].b != NULL)
            ss.insert(kPOSMap[i].b);

    set<string>::iterator it;
    for (it = ss.begin(); it != ss.end(); it++)
        cout << *it << endl;
}

int main(int argc, char **argv) {
    MozcDict md;

    if (argc <= 1) {
        print_help();
        return -1;
    }

    string flg = argv[1];

    if (flg == "-a") {
        md.debug_print();
    } else if (flg == "-swd") {
        if (argc > 5) {
            md.set_entry_with_dic(argv[2], argv[3], argv[4], argv[5], "");
            md.save();
        }
    } else if (flg == "-s") {
        if (argc > 4) {
            md.set_entry(argv[2], argv[3], argv[4], "");
            md.save();
        }
    } else if (flg == "-D") {
        if (argc > 2) {
            md.delete_dic(argv[2]);
            md.save();
        }
    } else if (flg == "-i") {
        if (argc > 3) {
            md.import(argv[2], argv[3]);
            md.save();
        }
    } else if (flg == "-e") {
        if (argc > 3) {
            md.export_dic(argv[2], argv[3]);
            md.save();
        }
    } else if (flg == "-c") {
        if (argc > 2) {
            md.clear(argv[2]);
            md.save();
        }
    } else if (flg == "-l") {
        list_pos();
    } else if (flg == "-r") {
        reboot();
    } else {
        print_help();
    }

    return 0;
}
