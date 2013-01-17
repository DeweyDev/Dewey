#include <stdio.h>
#include <stdlib.h>
void sumofArray(int *givenpassedpointer, int givenfinalsize);

int main2()
{
   /*Set up Everything*/
    printf("Enter number of elements: \n");
    int givensize;
    scanf("%d",&givensize);
    int finalsize;
    finalsize = (givensize - 1);
    int sum;
    sum = 0;
    int* sumpoint;
    sumpoint = &sum;
    int counter;
    counter = 0;
    int storage[finalsize*sizeof(int)];
    int *pointertostorage;
    pointertostorage = &storage[0];
/*Input in all array values*/
    while(counter <= finalsize){
        printf("\n================================================\n");
        scanf("%d",pointertostorage);
        printf("\nYou entered %d \n",*pointertostorage);
        pointertostorage = pointertostorage + 1;
        counter = counter + 1;
    }
/*Call function */
    sumofArray(&storage[0],finalsize);

    return 0;
}

void sumofArray(int *givenpassedpointer, int givenfinalsize){
int finalsize = givenfinalsize;
int *passedpointer = givenpassedpointer;
int counter = 0;
int sum = 0;
while(counter <= finalsize){

    sum = sum + *passedpointer;
    passedpointer = passedpointer+1;
    counter = counter +1;


}
printf("\n============================================================");
printf(" \nThe sum is %d \n \n", sum);
double answer =  ((double)sum/(finalsize+1));
printf("The average is %g \n", answer);
}

