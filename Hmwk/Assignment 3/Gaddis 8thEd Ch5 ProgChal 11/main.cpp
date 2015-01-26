/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 6:29 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 11
 */
//System Library
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main()
{
int sorg, dinc, dmul, psize;

cout << "Whats the starting organisms population size? ";
cin >> sorg;
cout << "\nWhats the daily average popluation increase (percentage)? ";
cin >> dinc;

cout << "\nWhats the number of days they will multiply? ";
cin >> dmul;
psize = sorg;
for(int count = 2; count <= dmul; count++)
{
psize = psize +(sorg * dinc/100);
cout << "\nThe size of the population is: "<< psize;
}

return 0;
}