/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 13, 2015, 11:35 AM
 * Purpose:Savitch 8Ed Ch2 Prob12
 */

#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First Pass calculate->"<<guess<<endl;
    //Second pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second Pass calculate->"<<guess<<endl;
    //Third Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the third pass
    cout<<"third Pass calculate->"<<guess<<endl;
    //fourth pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the fourth pass
    cout<<"Fourth Pass calculate->"<<guess<<endl;

    return 0;
}

