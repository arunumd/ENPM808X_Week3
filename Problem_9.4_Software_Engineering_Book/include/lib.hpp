#pragma once

// Solution for Problem 9.4 on Software Engineering Book
#include <iostream>
#include <string>

/*************************************************************************************************************
*                 The class WordLens is the class used for searching substrings in a string
**************************************************************************************************************/
class WordLens{
  public:
  WordLens(){};/*Default constructor*/
  ~WordLens(){}; /*Default destructor*/
  
  void sentenceInput(){/*This function gets the parent sentence from user. This sentence will be used as a search substrate*/
  std::cout<<"Please enter the parent sentence below :"<<std::endl;/*A simple prompt for parent sentence input*/
  std::getline(std::cin,sentence);/*getline function enables grabbing the whole sentence until the user types ENTER key*/
  }
  
  void keywordInput(){/*This function gets the search keyword from the user and stores it in the variable "keyword"*/
  std::cout<<"Please enter the search term below :"<<std::endl;/*A simple prompt for keyword/ search-term input*/
  std::getline(std::cin,keyword);/*getline function enables grabbing the whole keyword (as a string /
  with spaces) until the user types ENTER key*/
  }
  
  std::size_t keywordScan(){/*This function is used for scanning the parent sentence for the substrings /
  given by the user and returning a decision whether it was found or not*/
  position = sentence.find(keyword);/*This is a simple usage of std::string member function find() to find /
  the location of a sub-string within a parent string*/
  if (position!=std::string::npos){/*npos is the end of string. The find() function returns the location of /
  npos if the search term was not found*/
  std::cout<<"\nThe search-term \""<<keyword<<"\" was found in position "<<position<<" /
  of the sentence !"<<std::endl; /*Print out the succesful /
  location of keyword/ search-term*/
  return position; /*Here position will be the location of the succesfully found search term*/
  }
  else{
    std::cout<<"\nThe search-term \""<<keyword<<"\" was not found in the given sentence !"<<std::endl;/*When the string/
     is not found, we print an error message*/
    return position; /*Here position will be end of string*/
  }
  }

  private:
  std::string sentence;/*< "sentence" is the variable of string type which is used for storing the parent sentence input by the user*/
  std::string keyword;/*< The variable keyword which is of string type is used for holding the keyword input by the user*/
  std::size_t position;/*< This variable will hold the position of the search term in the sentence*/
};