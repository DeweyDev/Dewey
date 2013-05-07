#include "calctools.h"

// Sorts an array

void bubbleSortMinToMax(int numbers[], int array_size)
{
    int i, j, temp;

    for (i = (array_size - 1); i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (numbers[j-1] < numbers[j])
            {
                temp = numbers[j-1];
                numbers[j-1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

// Sorts an array

void bubbleSortMaxToMin(int numbers[], int array_size)
{
    int i, j, temp;

    for (i = (array_size - 1); i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (numbers[j-1] > numbers[j])
            {
                temp = numbers[j-1];
                numbers[j-1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}


// Find the index of a certain char in a char array

int findIndexOfChar(char chars[], int array_size, char findthis)
{

    int i;

    for(i = 0; i < array_size; i++)
    {
        if(findthis == chars[i])
        {
            break;
        }
    }

    return i;


}

// Find the index of a certain int in an int array

int findIndexOfInt(int intarray[], int array_size, int findthis)
{

    int i;

    for(i = 0; i < array_size; i++)
    {
        if(findthis == intarray[i])
        {
            break;
        }
    }

    return i;

}

// Copies the values of one array into another

void copyArray(int sourceArray[], int destinationArray[], int numOfElements)
{

    int i;

    for(i = 0; i < numOfElements; i++)
    {

        destinationArray[i] = sourceArray[i];

    }

}

int sumArray(int givenarray[],int num_of_elements)
{

    int sum = 0;
    int i;

    for(i = 0; i < num_of_elements; i++)
    {

        sum = sum + givenarray[i];

    }

    return sum;
}

double avgArray(int givenarray[],int num_of_elements)
{

    double average;

    int sum = sumArray(givenarray,num_of_elements);

    average = (double)sum/num_of_elements;
	
	return average;

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

int findMaxVal(int storageArray[], int numOfElements)
{

    int i;
    int max = 0;

    for(i = 0; i < numOfElements; i++)
    {

        if(storageArray[i] > max)
        {
            max = storageArray[i];
        }

    }

    return max;
}
