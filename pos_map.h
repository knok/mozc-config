// Copyright 2009 Google Inc. All Rights Reserved.
// Author: keni

#ifndef MOZC_DICTIONARY_POS_MAP_H_
#define MOZC_DICTIONARY_POS_MAP_H_

// POS conversion rules
const POSMap kPOSMap[] = {
  { "\x31", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\x31\x30", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\x31\x31", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\x31\x32", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\x31\x33", "\xE6\x95\xB0" }, 
  { "\x31\x34", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\x31\x35", "\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E" }, 
  { "\x31\x36", "\xE6\x8E\xA5\xE7\xB6\x9A\xE8\xA9\x9E" }, 
  { "\x31\x37", "\xE6\x84\x9F\xE5\x8B\x95\xE8\xA9\x9E" }, 
  { "\x31\x38", "\xE7\x8B\xAC\xE7\xAB\x8B\xE8\xAA\x9E" }, 
  { "\x31\x39", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\x32", "\xE5\xA7\x93" }, 
  { "\x32\x30", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\x32\x31", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\x32\x32", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\x32\x33", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x34", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x35", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x36", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x37", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x38", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x32\x39", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x33", "\xE5\x90\x8D" }, 
  { "\x33\x30", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x33\x31", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x33\x32", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8F\xE8\xA1\x8C\xE5\x9B\x9B\xE6\xAE\xB5" }, 
  { "\x33\x33", "\xE5\x8B\x95\xE8\xA9\x9E\xE4\xB8\x80\xE6\xAE\xB5" }, 
  { "\x33\x34", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE5\xA4\x89" }, 
  { "\x33\x35", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\x33\x36", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB6\xE5\xA4\x89" }, 
  { "\x33\x37", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\x33\x38", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\x33\x39", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\x34", "\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\x34\x30", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\x34\x31", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\x34\x32", "\xE7\xB5\x82\xE5\x8A\xA9\xE8\xA9\x9E" }, 
  { "\x34\x33", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\x34\x34", NULL }, 
  { "\x34\x35", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE5\xA4\x89" }, 
  { "\x34\x36", NULL }, 
  { "\x34\x37", NULL }, 
  { "\x34\x38", NULL }, 
  { "\x34\x39", NULL }, 
  { "\x35", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\x35\x30", NULL }, 
  { "\x35\x31", NULL }, 
  { "\x35\x32", NULL }, 
  { "\x35\x33", NULL }, 
  { "\x35\x34", NULL }, 
  { "\x35\x35", NULL }, 
  { "\x35\x36", NULL }, 
  { "\x35\x37", NULL }, 
  { "\x35\x38", NULL }, 
  { "\x35\x39", NULL }, 
  { "\x36", "\xE7\xB5\x84\xE7\xB9\x94" }, 
  { "\x36\x30", NULL }, 
  { "\x36\x31", NULL }, 
  { "\x36\x32", NULL }, 
  { "\x36\x33", NULL }, 
  { "\x36\x34", NULL }, 
  { "\x36\x35", NULL }, 
  { "\x36\x36", NULL }, 
  { "\x36\x37", NULL }, 
  { "\x36\x38", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\x36\x39", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\x37", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\x37\x30", "\xE9\xA1\x94\xE6\x96\x87\xE5\xAD\x97" }, 
  { "\x38", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\x39", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE3\x81\x82\xE3\x82\x8F\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x82\xE3\x82\x8F\xE8\xA1\x8C\xE3\x81\x86\xE9\x9F\xB3\xE4\xBE\xBF", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x82\xE3\x82\x8F\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x8B\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x8B\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x8B\xE8\xA1\x8C\xE4\xBF\x83\xE9\x9F\xB3\xE4\xBE\xBF", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x8C\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x8C\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x95\xE5\xA4\x89\xE5\x89\xAF\xE8\xA9\x9E", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE3\x81\x95\xE5\xA4\x89\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE3\x81\x95\xE5\xA4\x89\xE5\xBD\xA2\xE5\x8B\x95", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE3\x81\x95\xE5\xA4\x89\xE5\xBD\xA2\xE5\x8B\x95\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE3\x81\x95\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x95\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x96\xE5\xA4\x89\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE3\x81\x9D\xE3\x81\xAE\xE4\xBB\x96\xE3\x81\xAE\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE3\x81\x9D\xE3\x81\xAE\xE4\xBB\x96\xE8\x87\xAA\xE7\xAB\x8B\xE8\xAA\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE3\x81\x9F\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\x9F\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xAA\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xAA\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xB0\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xB0\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xBE\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x81\xBE\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\x89\xE8\xA1\x8C", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\x89\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\x89\xE8\xA1\x8C\xE5\xA4\x89\xE6\xA0\xBC", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE5\xA4\x89" }, 
  { "\xE3\x82\xA2\xE3\x83\xAB\xE3\x83\x95\xE3\x82\xA1\xE3\x83\x99\xE3\x83\x83\xE3\x83\x88", "\xE3\x82\xA2\xE3\x83\xAB\xE3\x83\x95\xE3\x82\xA1\xE3\x83\x99\xE3\x83\x83\xE3\x83\x88" }, 
  { "\xE3\x82\xAB\xE5\xA4\x89\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE5\xA4\x89" }, 
  { "\xE3\x82\xAB\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xAB\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\xAC\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xAC\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\xB5\xE5\xA4\x89\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE3\x82\xB5\xE5\xA4\x89\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE3\x82\xB5\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x82\xB6\xE5\xA4\x89\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB6\xE5\xA4\x89" }, 
  { "\xE3\x82\xB6\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xBF\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xBF\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\x80\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x80\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x8A\xE5\xA4\x89\xE5\x8B\x95\xE8\xA9\x9E", NULL }, 
  { "\xE3\x83\x8A\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\x8F\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x8F\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x8F\xE8\xA1\x8C\xE5\x9B\x9B\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8F\xE8\xA1\x8C\xE5\x9B\x9B\xE6\xAE\xB5" }, 
  { "\xE3\x83\x90\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x90\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\x9E\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x9E\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\xA4\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\xA4\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\xA9\xE5\xA4\x89\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE5\xA4\x89" }, 
  { "\xE3\x83\xA9\xE8\xA1\x8C\xE4\xB8\x8A\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\xA9\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\xAF\xE8\xA1\x8C\xE4\xB8\x8B\xE4\xBA\x8C\xE6\xAE\xB5", NULL }, 
  { "\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5\xE9\x9F\xB3\xE4\xBE\xBF", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE4\xB8\x80\xE6\xAE\xB5\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x8B\x95\xE8\xA9\x9E\xE4\xB8\x80\xE6\xAE\xB5" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x91\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x91\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x92\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x92\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x93\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x93\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE4\xB8\x81\xE5\xAF\xA7\xEF\xBC\x94\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE4\xBA\xBA\xE5\x90\x8D", "\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\xE4\xBA\xBA\xE5\x90\x8D\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\xE4\xBA\xBA\xE5\x90\x8D\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE4\xBA\xBA\xE7\xA7\xB0\xE4\xBB\xA3\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE4\xBB\xA3\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x86\xA0\xE6\x95\xB0\xE8\xA9\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE5\x89\x8D\xE7\xBD\xAE\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xE7\x9A\x84\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xEF\xBE\x80\xEF\xBE\x9E", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xEF\xBE\x84", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xEF\xBE\x84\xE3\x81\x95\xE5\xA4\x89", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xEF\xBE\x85", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x89\xAF\xE8\xA9\x9E\xEF\xBE\x86", "\xE5\x89\xAF\xE8\xA9\x9E" }, 
  { "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE5\xA4\x89", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE5\xA4\x89" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAB\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xAC\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB5\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB6\xE5\xA4\x89", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xB6\xE5\xA4\x89" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x82\xBF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8A\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8F\xE8\xA1\x8C\xE5\x9B\x9B\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x8F\xE8\xA1\x8C\xE5\x9B\x9B\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x90\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\x9E\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE5\xA4\x89", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE5\xA4\x89" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xA9\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE3\x83\xAF\xE8\xA1\x8C\xE4\xBA\x94\xE6\xAE\xB5" }, 
  { "\xE5\x8B\x95\xE8\xA9\x9E\xE4\xB8\x80\xE6\xAE\xB5", "\xE5\x8B\x95\xE8\xA9\x9E\xE4\xB8\x80\xE6\xAE\xB5" }, 
  { "\xE5\x8C\xBA", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x8D\x98\xE6\xBC\xA2\xE5\xAD\x97", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x8F\xA5\xE8\xAA\xAD\xE7\x82\xB9", "\xE5\x8F\xA5\xE8\xAA\xAD\xE7\x82\xB9" }, 
  { "\xE5\x90\x8D", "\xE5\x90\x8D" }, 
  { "\xE5\x90\x8D\xE3\x82\xB5\xE5\xBD\xA2\xE5\x8B\x95", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB6\xE5\xA4\x89", "\xE5\x90\x8D\xE8\xA9\x9E\xE3\x82\xB5\xE5\xA4\x89" }, 
  { "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE4\xB8\x80\xE8\x88\xAC", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE4\xBA\xBA\xE4\xBB\x96", "\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE4\xBA\xBA\xE5\x90\x8D", "\xE5\x90\x8D" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE4\xBA\xBA\xE5\xA7\x93", "\xE5\xA7\x93" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x95\x86\xE5\x93\x81", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x9C\xB0\xE5\x90\x8D", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE5\x9B\xBA\xE6\x9C\x89\xE7\xB5\x84\xE7\xB9\x94", "\xE7\xB5\x84\xE7\xB9\x94" }, 
  { "\xE5\x9B\xBD", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x9C\xB0\xE5\x90\x8D", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x9C\xB0\xE5\x90\x8D\xE3\x81\x9D\xE3\x81\xAE\xE4\xBB\x96", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x9C\xB0\xE5\x90\x8D\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\x9C\xB0\xE5\x90\x8D\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE5\xA7\x93", "\xE5\xA7\x93" }, 
  { "\xE5\xA7\x93\xE5\x90\x8D\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\xE5\xA7\x93\xE5\x90\x8D\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE5\xB8\x82", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE5\xBB\xBA\xE7\xAF\x89\xE7\x89\xA9", "\xE7\xB5\x84\xE7\xB9\x94" }, 
  { "\xE5\xBB\xBA\xE7\xAF\x89\xE7\x89\xA9\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE5\xBD\xA2\xE5\x8B\x95\xE3\x82\xBF\xE3\x83\xAA", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\x8B\x95\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE5\x8B\x95\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE5\x8B\x95\xE8\xA9\x9E\xEF\xBD\xB6\xEF\xBE\x9E\xEF\xBE\x99", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE5\x8B\x95\xE8\xA9\x9E\xEF\xBE\x80\xEF\xBE\x99", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE5\x8B\x95\xE8\xA9\x9E\xEF\xBE\x89", "\xE5\x90\x8D\xE8\xA9\x9E\xE5\xBD\xA2\xE5\x8B\x95" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE3\x82\xA4", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE3\x82\xA6", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE3\x82\xA8", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xEF\xBD\xAD\xEF\xBD\xB3", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xEF\xBD\xB3", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xEF\xBD\xB6\xEF\xBE\x9E\xEF\xBE\x99", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xEF\xBD\xB9\xEF\xBE\x9E", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xEF\xBE\x92", "\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E" }, 
  { "\xE5\xBE\x8C\xE7\xBD\xAE\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE5\xBE\x8C\xE7\xBD\xAE\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E\xEF\xBC\x8B", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE6\x84\x9F\xE5\x8B\x95\xE8\xA9\x9E", "\xE6\x84\x9F\xE5\x8B\x95\xE8\xA9\x9E" }, 
  { "\xE6\x85\xA3\xE7\x94\xA8\xE5\x8F\xA5", "\xE7\x8B\xAC\xE7\xAB\x8B\xE8\xAA\x9E" }, 
  { "\xE6\x8A\x91\xE5\x88\xB6\xE5\x8D\x98\xE8\xAA\x9E", NULL }, 
  { "\xE6\x8B\xAC\xE5\xBC\xA7\xE9\x96\x89", "\xE6\x8B\xAC\xE5\xBC\xA7\xE9\x96\x89" }, 
  { "\xE6\x8B\xAC\xE5\xBC\xA7\xE9\x96\x8B", "\xE6\x8B\xAC\xE5\xBC\xA7\xE9\x96\x8B" }, 
  { "\xE6\x8C\x87\xE7\xA4\xBA\xE4\xBB\xA3\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE6\x8C\x87\xE7\xA4\xBA\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E", "\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E" }, 
  { "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xBA\xBA\xE5\x90\x8D", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xBA\xBA\xE5\x90\x8D" }, 
  { "\xE6\x8E\xA5\xE5\xB0\xBE\xE5\x9C\xB0\xE5\x90\x8D", "\xE6\x8E\xA5\xE5\xB0\xBE\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE6\x8E\xA5\xE7\xB6\x9A\xE8\xA9\x9E", "\xE6\x8E\xA5\xE7\xB6\x9A\xE8\xA9\x9E" }, 
  { "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E", "\xE6\x8E\xA5\xE9\xA0\xAD\xE8\xAA\x9E" }, 
  { "\xE6\x95\xB0", "\xE6\x95\xB0" }, 
  { "\xE6\x95\xB0\xE5\xAD\x97\xE5\x88\x97\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE6\x95\xB0\xE8\xA9\x9E", "\xE6\x95\xB0" }, 
  { "\xE6\x95\xB0\xE9\x87\x8F", "\xE6\x95\xB0" }, 
  { "\xE6\x99\x82\xE9\x96\x93\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE6\x99\x82\xE9\x96\x93\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E\xEF\xBC\x8B", "\xE5\x8A\xA9\xE6\x95\xB0\xE8\xA9\x9E" }, 
  { "\xE6\x99\xAE\xE9\x80\x9A\xE5\x90\x8D\xE8\xA9\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE6\x9D\x91", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE7\x84\xA1\xE5\x93\x81\xE8\xA9\x9E", "\xE7\x8B\xAC\xE7\xAB\x8B\xE8\xAA\x9E" }, 
  { "\xE7\x89\xA9\xE5\x93\x81", "\xE5\x9B\xBA\xE6\x9C\x89\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE7\x8B\xAC\xE7\xAB\x8B\xE8\xAA\x9E", "\xE7\x8B\xAC\xE7\xAB\x8B\xE8\xAA\x9E" }, 
  { "\xE7\x94\xBA", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE7\x9C\x8C", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE7\x9F\xAD\xE7\xB8\xAE\xE8\xAA\x9E", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE7\xA4\xBE\xE5\x90\x8D", "\xE7\xB5\x84\xE7\xB9\x94" }, 
  { "\xE7\xA4\xBE\xE5\x90\x8D\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE7\xB5\x82\xE5\x8A\xA9\xE8\xA9\x9E", "\xE7\xB5\x82\xE5\x8A\xA9\xE8\xA9\x9E" }, 
  { "\xE7\xB5\x84\xE7\xB9\x94", "\xE7\xB5\x84\xE7\xB9\x94" }, 
  { "\xE7\xB5\x84\xE7\xB9\x94\xE5\x90\x8D\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE7\xB5\x84\xE7\xB9\x94\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE8\x8B\xB1\xE5\xAD\x97", "\xE3\x82\xA2\xE3\x83\xAB\xE3\x83\x95\xE3\x82\xA1\xE3\x83\x99\xE3\x83\x83\xE3\x83\x88" }, 
  { "\xE8\xA4\x87\xE6\x95\xB0\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE8\xA7\xA3\xE6\x9E\x90\xE4\xB8\x8D\xE8\x83\xBD\xE6\x96\x87\xE5\xAD\x97", "\xE5\x90\x8D\xE8\xA9\x9E" }, 
  { "\xE8\xA8\x98\xE5\x8F\xB7", "\xE8\xA8\x98\xE5\x8F\xB7" }, 
  { "\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E", "\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E" }, 
  { "\xE9\x80\xA3\xE7\x94\xA8\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xAA\x9E", "\xE6\x8E\xA5\xE5\xB0\xBE\xE4\xB8\x80\xE8\x88\xAC" }, 
  { "\xE9\x83\xA1", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
  { "\xE9\xA1\x94", "\xE9\xA1\x94\xE6\x96\x87\xE5\xAD\x97" }, 
  { "\xE9\xA1\x94\xE6\x96\x87\xE5\xAD\x97", "\xE9\xA1\x94\xE6\x96\x87\xE5\xAD\x97" }, 
  { "\xE9\xA7\x85", "\xE5\x9C\xB0\xE5\x90\x8D" }, 
};

#endif  // MOZC_DICTIONARY_POS_MAP_H_

