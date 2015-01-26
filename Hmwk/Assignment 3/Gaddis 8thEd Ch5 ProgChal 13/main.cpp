/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 25, 2015, 6:35 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 13
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!

int main(int argc, char** argv) {
int number, number2, number3, counter = 1;
float mul = 1;

cout << "Enter your first number that is not -99";
cin >> number;

while (number !=-99)
{
    cout << "Please enter your second number " <<endl<<endl;
    cin >> number2;
}

for (number != -99; number != -99; counter ++)
{
    cout <<"Please enter another number. ";
    cin >> number3;
}

if (number < number2 && number3)
{
    cout << "The low number is " << number << endl;
    if (number2 < number3)
    cout << "The high number is " << number3 << endl;
}
else if (number2 < number && number3)
{
    cout<< "The low number is " << number2 << endl;
    if (number < number3)
    cout << "The high number is " << number3 << endl;
}
else if (number3 < number && number2)
{
    cout << "The low numer is " << number3 << endl;
    if (number < number2)
    cout << "The high number is " << number2 << endl;
}
    return 0;
}

