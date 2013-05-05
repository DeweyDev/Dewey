/**
Author: shrimpboyho
Created on: January 2, 2013
Copyright 2013
==============================================

This class has one constructor that only only accepts a string:

DirectoryToArray::DirectoryToArray(path_of_the_directory)

The string is the path to the directory. (Note: all dashes in the path must be done with �/� or �\\� .

==============================================

This class has only 2 methods, which accepts an address to an array of strings or a vector of strings:

DirectoryToArray::arrayfiller(address_of_array_of_strings);
DirectoryToArray::vectorfiller(address_of_vector);

After this method has run the empty array/vector will be filled with the files in the directory.

==============================================
*/





#ifndef _DirectoryToArray
#define _DirectoryToArray

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <vector>

using namespace std;
class DirectoryToArray
{

public:

    string directorypath;
    void arrayfiller(string*);
    void vectorfiller(vector<string>*);
    DirectoryToArray(string);


};


#endif
