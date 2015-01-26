/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 3:15 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 5
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {

int days, salary; // Initiate the counter
float total = 0;

//Get integer
cout << "Enter a positive number\n";
cin >> days;
for (; days > 0; days--)
{
(total+=days*2);
}

cout << fixed << showpoint<<setprecision(0);
cout << "The salary is $:" << total << endl;

return 0;
}
    