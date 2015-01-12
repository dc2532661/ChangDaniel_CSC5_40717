/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 11, 2015, 8:02 AM
 * Purpose:Homework Assignment Gaddis_8Ed_Ch2_ProgChal7
 */

//Assuming the ocean's level is currently rising at 
//about 1.5 millimeters;
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //The ocean's level currently rising every years
    float OceanRising = 1.5, Millimeters;
    
    //Calculate and display that in 5 years
    Millimeters = OceanRising*5;
            cout<<"The ocean's level will be"<<Millimeters<<"in 5 years\n";
    //Calculate and display that in 7 years
    Millimeters = OceanRising*7;
            cout<<"The ocean's level will be"<<Millimeters<<"in 7 years\n";        
    //Calculate and display that in 10 years
    Millimeters = OceanRising*10;
            cout<<"The ocean's level will be"<<Millimeters<<"in 10 years\n";        
    //Exit stage right        
    return 0;
}

