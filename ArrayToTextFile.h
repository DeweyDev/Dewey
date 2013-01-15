
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


ArrayToTextFile::ArrayToTextFile(string given, char delimgiven,int sizeofarray){
path = given;
delim = delimgiven;
cout << "Recieved the delim and the path of where to write " << path <<endl;
}

ArrayToTextFile::ArrayToTextFile(string given,int sizeofarray){
path = given;
delim = '\n';
cout << "Set a default delim and the path of where to write" << path <<endl;
}

void ArrayToTextFile::textfiller(string *givenpointer){

cout<< "Recieved array pointer address" << givenpointer <<endl;

const char * constantcharversion = path.c_str();
ofstream filler(constantcharversion);


int i = 0;
//string delims = (string)delim;
for(i=0; i<sizeofarray; i++){

filler<<*givenpointer<<delim;
givenpointer = givenpointer+1;
}


filler.close();


}








#endif




