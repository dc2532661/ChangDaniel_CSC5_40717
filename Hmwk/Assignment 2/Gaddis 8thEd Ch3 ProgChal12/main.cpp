/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 1:42 PM
 * Purpose:Gaddis 8thEd Ch3 ProgChal12
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variable
    float Fah;//Fahrenheit temperature
    float Cel;//Celsius temperature
//input the numbers
cout<<"Enter the temperature degree in Celsius"<<endl;
cin>>Cel;
//Calculation
Fah=(9/5)*Cel+32;
//output the number
cout<<"The temperature degree in Fahrenheit is : "<<Fah<<endl;
    return 0;
}

