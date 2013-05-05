#include "DirectoryToArray.h"

void DirectoryToArray::arrayfiller(string* arraypointer)
{
    char *chardirectorypath = (char*)directorypath.c_str();
    DIR *dp;
    struct dirent *ep;

    dp = opendir (chardirectorypath);
    if (dp != NULL)
    {
        while (ep = readdir (dp))
        {
            *arraypointer=(string)ep->d_name;
            arraypointer++;
        }
        (void) closedir (dp);
    }
    else
        perror ("Couldn't open the directory");


}
DirectoryToArray::DirectoryToArray(string given)
{
    directorypath = given;
}

void DirectoryToArray::vectorfiller(vector<string>*givenpointer)
{

    char *chardirectorypath = (char*)directorypath.c_str();
    DIR *dp;
    struct dirent *ep;

    dp = opendir (chardirectorypath);
    if (dp != NULL)
    {
        while (ep = readdir (dp))
        {
            givenpointer->push_back((string)ep->d_name);
            givenpointer++;
        }
        (void) closedir (dp);
    }
    else
        perror ("Couldn't open the directory");



}
