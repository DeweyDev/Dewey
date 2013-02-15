#ifndef _calctools
#define _calctools


#include <stdio.h>
#include <stdlib.h>

using namespace std;

double averageArray(int *givenpassedpointer, int givenfinalsize);



double averageArray(int *givenpassedpointer, int givenfinalsize){
int counter = 0;
int sum = 0;
while(counter <= finalsize){

    sum = sum + *givenpassedpointer;
    givenpassedpointer = givenpassedpointer+1;
    counter = counter +1;


}

double answer =  ((double)sum/(finalsize+1));

return answer;
}

#endif
