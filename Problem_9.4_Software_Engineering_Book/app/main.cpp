/*********************************************************
*
*        Copyright 2018, Arun Kumar Devarajulu,
*       University of Maryland, College Park, MD
*       Copying any portion of this source code is 
*      prohibited without the consent of the owner.
*
**********************************************************/

#include <iostream>
#include <lib.hpp>

int main() {
  WordLens Searcher; /*Creation of object Searcher from class WordLens*/
  Searcher.sentenceInput(); /*User input for parent sentence*/
  Searcher.keywordInput(); /*user input for keyword/ search-term*/
  /*Search function usage and display of search outcome*/
  Searcher.keywordScan();
  return 0;
}
