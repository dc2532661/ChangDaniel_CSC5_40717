/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch8 ProgChal 8
 */

#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int searchList(const int [], int, int);
int binarySearch(const int [], int, int);
//Execution Begins Here!


int main(int argc, char** argv)
{
	int const SIZE = 20;
	int access[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 
        10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int resultSearch;
	int resultsBinary;
	int pin;
	cout << "Please enter a valid PIN Number: ";
	cin >> pin;
	cout << "I will search for the PIN number using searchList function\n";
	resultSearch = searchList(access, SIZE, pin);
	if(resultSearch == -1)
		cout << "You did not enter a valid PIN number.\n";
	else
	{
		cout << "You entered a valid PIN number\n";
		cout << (resultSearch + 1) << "\n";
	}
	cout << "I will now search for the PIN number using the Binary seach function.\n";
	resultsBinary = binarySearch(access, SIZE, pin);
	
	if(resultsBinary == -1)
		cout << "You have entered an invalid PIN number.\n";
	else
	{
		cout << "You have entered a valid PIN number.\n";
		cout << resultsBinary << endl;
	}
	return 0;
}
int searchList(const int list[], int size, int value)
{
	int index = 0,
		position = -1;
	bool found = false;
	while(index < size && !found)
	{
		if(list[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

binarySearch(const int list[], int size, int value)
{
	int first = 0,
		last = size -1,
		middle,
		position = -1;
	bool found = false;
	while(!found && first <= last)
	{
		middle = (first + last) / 2;
		if (list[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (list[middle] > value)
			last = middle - 1;
		else
			first = middle +1;
	}
	return position;
}