/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 7:17 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 7
 */
//System Library
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !

int main()
	{
int ftemp;
int ctemp;
int select = 0;
cout << "Please select from the following: " << endl;
cout << "1) Fahrenheit-to-Celsius" << endl;
cout << "2) Celsius-to-Fahrenheit" << endl << endl;
cout << "Enter: ";
cin >> select;
    if (select == 1)
{
cout << " Enter temperature in Fahrenheit to convert to degrees Celsius: ";
cin >> ftemp;
ctemp = (ftemp-32) * 5 / 9;
cout << "Equivalent in Celsius is: " << ctemp << endl;
	}
	else if (select == 2)
	{
cout <<" Enter temperature in Celsius to convert to degrees Fahrenheit: ";
cin >> ctemp;
ftemp = ctemp*9/5 + 32;
cout << "Equivalent in Fahrenheit is: " << ftemp << endl;
	}
	else
cout << "Valid options 1 or 2." << endl;
	return 0;
	}

