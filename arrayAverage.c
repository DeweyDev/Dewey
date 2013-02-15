#include <stdio.h>
#include <stdlib.h>
void averageArray(int *givenpassedpointer, int givenfinalsize);



void averageArray(int *givenpassedpointer, int givenfinalsize){
int counter = 0;
int sum = 0;
while(counter <= finalsize){

    sum = sum + *givenpassedpointer;
    givenpassedpointer = givenpassedpointer+1;
    counter = counter +1;


}
printf("\n============================================================");
printf(" \nThe sum is %d \n \n", sum);
double answer =  ((double)sum/(finalsize+1));
double average = answer/givenfinalsize;
printf("The average is %g \n", answer);
}

