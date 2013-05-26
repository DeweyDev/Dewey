//
// THIS FILE IS PART OF THE DEWEY++ SOFTWARE SOURCE CODE.
// USE, DISTRIBUTION AND REPRODUCTION OF THIS LIBRARY SOURCE IS
// GOVERNED BY A GPL-STYLE SOURCE LICENSE INCLUDED WITH THIS SOURCE
// IN 'COPYING'. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.
//
//

//+---------------------------------------------------------------------------
//
//  DEWEY DEV, 2013.
//
//  File:       ArrayToTextFile.cpp
//
//  Contents:   Inject contents of array into a textfile
//
//
//  Classes:    ArrayToTextFile
//
//  Functions:  ArrayToTextFile(string given, char delimgiven,int linky)
//              ArrayToTextFile(string given,int linky)
//              textfiller(string *givenpointer)
//
//
//  Author:     shrimpboyho ( shrimpboyhoftw@gmail.com )
//
//  History:    5-25-2013   shrimpboyho   Got stability workin
//
//----------------------------------------------------------------------------


#include "ArrayToTextFile.h"

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


