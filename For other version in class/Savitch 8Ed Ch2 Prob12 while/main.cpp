/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 13, 2015, 11:35 AM
 * Purpose:Savitch 8Ed Ch2 Prob12 V2
 */

#include <iostream>
#include<cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r, count=0;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //Initialize the guess
    guess=number/2;
    while(abs(guess-r)>.01);{
    r=number/guess;
    guess=(guess+r)/2;
    count++;
    //Output the first pass
    cout<<"Loop"<<count<<"->"<<guess<<endl;
    }
    //Exit Stage right!

    return 0;
}