/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 6:40 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 1
 */
//System Library
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float wholesaleCost, float markupPercent)
//Executions begin here !

{

float retailPrice;
retailPrice = (wholesaleCost * markupPercent) + wholesaleCost;
return retailPrice;

}

int main()
{
float wholesaleCost;
float markupPercent;
float total;

float calculateRetail (float, float);

cout << "Enter wholesale Price: $";
cin >> wholesaleCost;

if( wholesaleCost < 0 )
{
cout << "Error invalid wholesale cost...Enter a postive number: $";
cin >> wholesaleCost;
}

cout << "Please Enter markup percent: ";
cin >> markupPercent;

if(markupPercent < 0)
{
cout << "Error invalid markup percentage...enter a postive number ";
cin >> markupPercent;
}

markupPercent = markupPercent * .01;

total = calculateRetail(wholesaleCost, markupPercent);

cout << fixed << setprecision(2);
cout << "The retail price is $" << total << endl;
cout << endl;

return 0;
}