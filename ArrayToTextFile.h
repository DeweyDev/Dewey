
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

        ArrayToTextFile(string, char);
        ArrayToTextFile(string);
};


ArrayToTextFile::ArrayToTextFile(string given, char delimgiven){
path = given;
delim = delimgiven;
cout << "Recieved the delim and the path of where to write " << path <<endl;
}

ArrayToTextFile::ArrayToTextFile(string given){
path = given;
delim = '\n';
cout << "Set a default delim and the path of where to write" << path <<endl;
}

void ArrayToTextFile::textfiller(string *givenpointer){

cout<< "Recieved array pointer address" << givenpointer <<endl;

const char * constantcharversion = path.c_str();
ofstream filler(constantcharversion);



for(int i=0; i<10; i++){

filler<<*givenpointer<<delim;
givenpointer = givenpointer+1;
}


filler.close();


}








#endif




