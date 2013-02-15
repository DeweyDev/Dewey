#include <iostream>
#include "Dewey.h"

using namespace std;

int main()
{
    string directories[99];
    DirectoryToArray newone("C:/Program Files");
    newone.arrayfiller(&directories[0]);
    cout<<directories[6];
    return 0;
}
