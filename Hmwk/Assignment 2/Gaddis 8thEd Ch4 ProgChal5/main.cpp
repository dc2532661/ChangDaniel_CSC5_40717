/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 4:03 PM
 * Purpose: Gaddis 8thEd Ch4 ProgChal5
 */
//System Library
#include <iostream>
#include <cmath>


using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here



int main(int argc, char** argv) {
//Declare Variables
    char BMI;
    float Weight;
    float Height;
//output the number and calculate
cout<<"How tall are you ?"<<endl;
cin>>Height;
cout<<"What is your weight?"<<endl;
cin>>Weight;
BMI=Weight*703/pow(Height, 2);
//output the answer
if(BMI>25)
    cout<<"You are considered to be overweight!"<<endl;
else if(18.5>BMI)
    cout<<"You are considered to be underweight!!"<<endl;
else
    cout<<"Your are very healthy!"<<endl;
    return 0;
}
