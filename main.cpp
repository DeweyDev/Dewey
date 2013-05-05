#include <iostream>
#include "dewey.h"


using namespace std;

int main()
{
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
