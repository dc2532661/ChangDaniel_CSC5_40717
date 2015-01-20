/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 12:21 PM
 * Purpose: Gaddis 8thEd Ch3 ProgChal
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variables
    float Males, Females;
    float TotalPeo;//Total people
    float PerMe;//Percentage of Males
    float PerFe;//Percentage of Females
//input the variables
cout<<"How many Males in the class?\n"<<endl;
cin>>Males;
cout<<"How many Females in the class?\n"<<endl;
cin>>Females;
//Calculation
TotalPeo=Males+Females;
PerMe=Males/TotalPeo;
PerFe=Females/TotalPeo;
//output the variables
cout<<"The percentage of Males in class is : "<<PerMe<<endl;
cout<<"The percentage of Females in class is : "<<PerFe<<endl;
    return 0;
}

