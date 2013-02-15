/**
Author: shrimpboyho
Created on: January 2, 2013
Copyright 2013
==============================================

This class has two constructors that accepts the following:

ArrayToTextFile::ArrayToTextFile(string path,int elements)
ArrayToTextFile::ArrayToTextFile(string path,char delimeter,int elements)

       => "path" is the location of where to create/overwrite the file
       => "delimter" is the delimeter needed to seperate the printed elements
           (if not specified, it is a defult new line)
       => "elements" is the number of elements in the array

The string is the path to the directory. (Note: all dashes in the path must be done with �/� or �\\� .

==============================================

This class has only 1 method, which accepts an address to an array of strings:

DirectoryToArray::arrayfiller(address_of_array_of_strings);

After this method has run the conetents in the array will be copied into a text file on the hard disk.

==============================================
*/

#ifndef _ArrayToTextFile
#define _ArrayToTextFile


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ArrayToTextFile
{

public:
    string path;
    int sizeofarray;
    char delim;
    void textfiller(string *);

    ArrayToTextFile(string, char,int);
    ArrayToTextFile(string,int);
};


ArrayToTextFile::ArrayToTextFile(string given, char delimgiven,int linky)
{
    path = given;
    sizeofarray = linky;
    delim = delimgiven;
    cout << "Recieved the delim and the path of where to write " << path <<endl;
}

ArrayToTextFile::ArrayToTextFile(string given,int linky)
{
    path = given;
    sizeofarray = linky;
    delim = '\n';
    cout << "Set a default delim and the path of where to write" << path <<endl;
}

void ArrayToTextFile::textfiller(string *givenpointer)
{

    cout<< "Recieved array pointer address" << givenpointer <<endl;

    const char * constantcharversion = path.c_str();
    ofstream filler(constantcharversion);
    int i;
    for( i=0; i<sizeofarray; i++)
    {

        filler<<*givenpointer<<delim;
        givenpointer = givenpointer+1;
        cout<<"Writing...";
    }


    filler.close();


}








#endif




