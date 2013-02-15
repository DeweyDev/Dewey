
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




