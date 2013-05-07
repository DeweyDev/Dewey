#include "DirectoryToArray.h"

void DirectoryToArray::arrayfiller(string* arraypointer)
{

    // Code for GNU and MinGW

    #ifdef __GNUC__

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

    #endif

    // Code for MSVC

    #ifdef _MSC_VER

        cout << "\nHaven't set up MSVC YET\n";

    #endif
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
