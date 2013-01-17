#include <iostream>
#include "ArrayToTextFile.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color 1A");

    cout << "Hello world!" << endl;
    string kinch[3] = {"klinch", "knot", "third"};
    ArrayToTextFile newone("C:/kinchy.txt",';', 3);
    string *pointy = &kinch[0];

    newone.textfiller(pointy);
    return 0;
}
