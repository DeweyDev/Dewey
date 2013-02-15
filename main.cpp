#include <iostream>
#include "dewey.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double bunz[2]={0,100};
    double average = averageArray(&bunz[0],2);
    cout<< average;
}
