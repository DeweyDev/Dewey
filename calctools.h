#ifndef _calctools
#define _calctools


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

double averageArray(int *givenpassedpointer, int givenfinalsize);
double averageArray(double *givenpassedpointer, int givenfinalsize);
string toBinary(int decimal);
void findMaxElements(int base_array[],int size_of_base_array,  int returnArray[], int number_of_elements_to_find);

void findMaxElements(int base_array[],int size_of_base_array,  int returnArray[], int number_of_elements_to_find)
{

    // Set up all initial variables

    int i,k,c,position;
    int maximum = 0;

    /*Actual Algorythm */

    for(i = 0; i < number_of_elements_to_find; i++)
    {

        // Get the max value in the base array

        for(k = 0; k < size_of_base_array; k++)
        {
            if(base_array[k] > maximum)
            {
                maximum = base_array[k];
            }
        }

        // Find the position of the max value

        for(position = 0; position < size_of_base_array; position++)
        {

            if(base_array[position] == maximum)
            {
                break;
            }

        }

        // Delete the maximum value from the array and shift everything

        for(c = position; c < size_of_base_array - 1; c++)
        {
            base_array[c] = base_array[c+1];
        }

        // Reduce the size of the array

        size_of_base_array -= 1;

        // Push max value into the answers array

        returnArray[i] = maximum;

        // Reset max value

        maximum = 0;
    }


}


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

string toBinary(int decimal)
{

    stringstream out;

    string answer = "";

    int remainder;

    if(decimal == 0)
    {
        return "0";
    }
    if(decimal == 1)
    {
        return "1";
    }

    while(decimal != 0)
    {

        remainder = decimal % 2;
        out << remainder;
        answer = out.str() + answer;
        decimal = decimal / 2.0;
        out.str("");

    }
    return answer;
}

string toDecimal(string binary)
{

    string returnstring;
    int i;
    int base = 0;

    for(i=0; i < binary.length(); i++)
    {

        base = (base * 2) + (binary[i] - '0');

    }

    stringstream ss;
    ss << base;
    returnstring = ss.str();
    return returnstring;



}


#endif
