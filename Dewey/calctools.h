#ifndef _calctools
#define _calctools


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

string toBinary(int decimal);
string toDecimal(string binary);

void bubbleSortMinToMax(int numbers[], int array_size);
void bubbleSortMaxToMin(int numbers[], int array_size);
int findIndexOfChar(char chars[], int array_size, char findthis);
int findIndexOfInt(int intarray[], int array_size, int findthis);
void copyArray(int sourceArray[], int destinationArray[], int numOfElements);
int sumArray(int givenarray[],int num_of_elements);
double avgArray(int givenarray[],int num_of_elements);

template <class numType> numType findMaxVal(numType storageArray[], int numOfElements)
{

    int i;
    numType max = 0;

    for(i = 0; i < numOfElements; i++)
    {

        if(storageArray[i] > max)
        {
            max = storageArray[i];
        }

    }

    return max;
}

#endif
