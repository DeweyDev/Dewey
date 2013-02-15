#ifndef _calctools
#define _calctools


#include <stdio.h>
#include <stdlib.h>

using namespace std;

double averageArray(int *givenpassedpointer, int givenfinalsize);
double averageArray(double *givenpassedpointer, int givenfinalsize);



double averageArray(int *givenpassedpointer, int givenfinalsize)
{
    int counter = 0;
    int sum = 0;
    while(counter < givenfinalsize)
    {

        sum = sum + *givenpassedpointer;
        givenpassedpointer = givenpassedpointer+1;
        counter = counter + 1;


    }

    double answer =  (sum/((double)givenfinalsize));

    return answer;
}

double averageArray(double *givenpassedpointer, int givenfinalsize)
{
    int counter = 0;
    double sum = 0;
    while(counter < givenfinalsize)
    {

        sum = sum + *givenpassedpointer;
        givenpassedpointer = givenpassedpointer+1;
        counter = counter +1;


    }

    double answer =  (sum/(givenfinalsize));

    return answer;
}

#endif
