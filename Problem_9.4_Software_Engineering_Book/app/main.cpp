#include <iostream>
#include <lib.hpp>

int main(){
  WordLens Searcher; /*Creation of object Searcher from class WordLens*/
  Searcher.sentenceInput(); /*User input for parent sentence*/
  Searcher.keywordInput(); /*user input for keyword/ search-term*/
  Searcher.keywordScan(); /*Search function usage and display of search outcome*/
  return 0;
}
