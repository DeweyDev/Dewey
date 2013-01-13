#include <iostream>
#include "ArrayToTextFile.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color 1A");

    cout << "Hello world!" << endl;
    string kinch[3] = {"a", "second el", "third"};
    ArrayToTextFile newone("C:/haha.txt", ';');
    string *pointy = &kinch[0];

    newone.textfiller(pointy);
    return 0;
}
