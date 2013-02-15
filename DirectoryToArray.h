#ifndef _DirectoryToArray
#define _DirectoryToArray

#include <iostream>
#include "dewey.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

using namespace std;
class DirectoryToArray
{

public:

    string directorypath;
    void arrayfiller(string*);
    DirectoryToArray(string);


};

void DirectoryToArray::arrayfiller(string* arraypointer)
{
    char *chardirectorypath = (char*)directorypath.c_str();
    DIR *dp;
    struct dirent *ep;

    dp = opendir (chardirectorypath);
    if (dp != NULL)
    {
        while (ep = readdir (dp))
            puts (ep->d_name);
        (void) closedir (dp);
    }
    else
        perror ("Couldn't open the directory");


}
DirectoryToArray::DirectoryToArray(string given){
    directorypath = given;
}
#endif
