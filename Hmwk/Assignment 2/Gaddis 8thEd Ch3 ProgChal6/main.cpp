/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 1:27 PM
 * Purpose: Gaddis 8thEd Ch3 ProgChal6
 */


//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare variables
    float Sugar=1.5;
    float Butter=1;
    float Flour=2.75;
    int Cookies=48;
    char Numco;//Number of cookies
    float TotSug, TotBut, TotFlo;
//output the number
cout<<"How many cookies do you want to make ? "<<endl;
cin>>Numco;
//Calculation
TotSug=(Numco/Cookies)*Sugar;
TotBut=(Numco/Cookies)*Butter;
TotFlo=(Numco/Cookies)*Flour;
//input the variables
cout<<"The total sugar which you need are"<<TotSug<<" "<<"cups"<<endl;
cout<<"The total butter which you need are"<<TotBut<<" "<<"cups"<<endl;
cout<<"The total flour which you need are"<<TotFlo<<" "<<"cups"<<endl;
    return 0;
}

