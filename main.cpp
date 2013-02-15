#include <iostream>
#include "Dewey.h"

using namespace std;

int main()
{
    string directories[4];
    DirectoryToArray newone("C://");
    newone.arrayfiller(&directories[0]);
    return 0;
}
