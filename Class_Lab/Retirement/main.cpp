/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 27, 2015, 9:11 AM
 * Purpose: Use the Babylonian 10 for retirement
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
//FOr overloaded functions return type does not matter
//only the types associated with parameters in the 
//pass by reference vs. pass by value does not count
//when overloading the function name
float retirement(float,float,float,int);
void retirement(float &,float,float,float);
//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    float salary=75000.0f;
    float invRate=0.05f;
    float defPrct=0.10f;
    float ndSave=salary;
    float nmYears;
    float retSav=0;
    //Heading
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You need to save $"<<ndSave<<endl;
    cout<<"Year       Savings"<<endl;
    //Calculate when we can retire
    for(int year=1;retSav<ndSave;year++){
        retSav=retirement(0.0,invRate,defPrct*salary,year);
        cout<<setw(4)<<year<<setw(10)<<retSav<<endl;
    }
    //Exit stage right
    return 0;
}

void retirement(float &p,float i,float d,float n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
}
}

float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}