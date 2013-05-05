/**
Author: shrimpboyho
Created on: January 2, 2013
Copyright 2013
==============================================

This class has 2 constructors that accept a string (or an optional delimeter):

TextFileToArray::TextFileToArray(path_of_the_text_file,option_char_delimeter)

The string is the path to the text file. (Note: all dashes in the path must be done with �/� or �\\� and the file extension �.txt� must also be included.

==============================================

This class has only 2 methods, which accepts an address to an array of strings or a vector of strings:

TextFileToArray::arrayfiller(address_of_array_of_strings);
TextFileToArray::vectorfiller(address_of_vector);

After this method has run the empty array/vector will be filled with the contents of the text file.

==============================================
*/

#ifndef _TextFileToArray
#define _TextFileToArray


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class TextFileToArray
{

public:
    string path;
    char delim;
    void arrayfiller(string *);
    void vectorfiller(vector<string>*givenpointer);
    TextFileToArray(string, char);
    TextFileToArray(string);
};


#endif
