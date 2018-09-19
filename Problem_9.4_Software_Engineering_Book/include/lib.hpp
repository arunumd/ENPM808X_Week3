/*********************************************************
*
*        Copyright 2018, Arun Kumar Devarajulu,
*       University of Maryland, College Park, MD
*       Copying any portion of this source code is 
*      prohibited without the consent of the owner.
*
*    This is the header file for substring searching
*        in an input sentence given by the user.
*
**********************************************************/
#pragma once

// Solution for Problem 9.4 on Software Engineering Book
#include <iostream>
#include <string>

/*************************************************************************************************************
*                 The class WordLens is the class used for searching substrings in a string
**************************************************************************************************************/
class WordLens {
    public:
       /*Default constructor with initial position of size_t position*/
       WordLens():position(0) {}
       ~WordLens() {} /*Default destructor*/

       /*This function gets the parent sentence from user. 
        *This sentence will be used as a search substrate*/
       void sentenceInput() {
       /*A simple prompt for parent sentence input*/
       std::cout << "Please enter the parent sentence below :" << std::endl;
       /* getline function enables grabbing the whole sentence until the 
        * user types ENTER key                                           */
       std::getline(std::cin, sentence);
       }

       /*This function gets the search keyword from the user and 
        *stores it in the variable "keyword"                     */
       void keywordInput() {
       /*A simple prompt for keyword/ search-term input*/
       std::cout << "Please enter the search term below :" << std::endl;
       /*getline function enables grabbing the whole keyword (as 
       a string with spaces) until the user types ENTER key      */
       std::getline(std::cin, keyword);
       }

       /*This function is used for scanning the parent sentence for the substrings
       given by the user and returning a decision whether it was found or not      */
       std::size_t keywordScan() {
       /*This is a simple usage of std::string member function find() to find
        *the location of a sub-string within a parent string                  */
       position = sentence.find(keyword);
       /*npos is the end of string. The find() function returns the location of
        *npos if the search term was not found                                  */
       if (position != std::string::npos) {
       /*Print out the succesful location of keyword/ search-term*/
       std::cout << "\nThe search-term \"" << keyword <<
       "\" was found in position " << position <<
       "of the sentence !" << std::endl;
       return position; /*< Here position will be the location of the
                            succesfully found search term*/
       }
       else {
       /*When the string is not found, we print an error message*/
       std::cout << "\nThe search-term \"" << keyword <<
       "\" was not found in the given sentence !" << std::endl;
       return position; /*Here position will be end of string*/
       }
       }

    private:
      std::string sentence;/*< "sentence" is the variable of string type which
                                is used for storing the parent sentence input
                                by the user*/
      std::string keyword;/*< The variable keyword which is of string type is
                              used for holding the keyword input by the user*/
      std::size_t position;/*< This variable will hold the position of the
                               search term in the sentence*/
};