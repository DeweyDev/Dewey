#include <iostream>
#include "dewey.h"


using namespace std;


int main()
{
    int i;
    DirectoryToArray stuff("C:/");

    string storaged[100];

    stuff.arrayfiller(&storaged[0]);

    for(i = 0; i < 100; i++){

        cout << "\nStorage: "<< storaged[i]<<"\n";

    }

    int input;
    cout << "Enter numebr to convert: \n";
    cin >> input;
    cout << toBinary(input);


    string input2;
    cout << "Enter numebr to convert: \n";
    cin >> input2;
    cout << toDecimal(input2);



    return 0;
}
