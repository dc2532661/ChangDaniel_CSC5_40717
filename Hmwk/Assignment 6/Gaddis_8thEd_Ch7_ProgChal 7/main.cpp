/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch7 ProgChal 7
 */

//System Libraries
#include <iostream>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int getHighest(int[], int);
int getLowest(int[], int);
int getSum(int[], int);
int getAverage(int[], int);

//Execution Begins Here!

int main(int argc, char** argv)
{

const int ARRAY_SIZE = 12;	// Array size.
int numbers[ARRAY_SIZE];	// Array with 10 elements.
int AVERAGE;	// To hold average of the values.
int count;	// Loop counter.
int highest;	// To hold highest value.
int lowest;	// To hold lowest value.
int sum;	// To hold total of sum.
ifstream inputFile;	// Input file stream object.
inputFile.open("numbers.txt");	// Open the file.


// Read the 10 numbers from the file into the array.
for (count = 0; count < ARRAY_SIZE; count++)
inputFile >> numbers[count];


// FIND the HIGHEST value.
highest = getHighest(numbers, ARRAY_SIZE);

// DISPLAY the HIGHEST value.
cout << "The Highest Value is: " << highest << endl;

// FIND the LOWEST value.
lowest = getLowest(numbers, ARRAY_SIZE);

// DISPLAY the LOWEST value.
cout << "The Lowest Value is: " << lowest << endl;

// FIND the SUM of the values.
sum = getSum(numbers, ARRAY_SIZE);

// DISPLAY the SUM of the values.
cout << "The Total Sum is: " << sum << endl;

// Find the Average of the values.
AVERAGE = getAverage(numbers, ARRAY_SIZE);

// DISPLAY the AVERAGE of the values.
cout << "The Average is: " << AVERAGE << endl;


// Close the file
inputFile.close();

return 0;

}

int getLowest(int numbers[], int ARRAY_SIZE)
{

int lowest;
lowest = numbers[12];
for (int count = 1; count < ARRAY_SIZE; count++)
{
if (numbers[count] < lowest)
lowest = numbers[count];
}
return lowest;
}


int getHighest(int numbers[], int ARRAY_SIZE)
{

int highest;

highest = numbers[12];
for (int count = 1; count < ARRAY_SIZE; count++)
{
if (numbers[count] > highest)
highest = numbers[count];
}
return highest;

}

int getSum(int numbers[], int ARRAY_SIZE)
{
int total = 0; // Initialize accumulator.

for (int count = 0; count < ARRAY_SIZE; count++)
total += numbers[count];
return total;
}

int getAverage(int numbers[], int ARRAY_SIZE)
{
int total = 0; // Initialize Accumulator
int average;	// To hold the average

for (int count = 0; count < ARRAY_SIZE; count++)
total += numbers[count];

average = total / ARRAY_SIZE;
return average;
}
