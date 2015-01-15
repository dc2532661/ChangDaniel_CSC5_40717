/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 15, 2015, 11:04 AM
 * Savitch 8Ed Ch2 Prob10
 */

#include <iostream>
#include<cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare Variables
    int sum=0,sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //Prompt for a value and sum it
    cout<<"Input an integer value!"<<endl;
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the result
    cout<<"Sum              ="<<sum<<endl;
    cout<<"Positive Sum  ="<<sumPos<<endl;
    cout<<"Negative Sum  ="<<sumNeg<<endl;
    cout<<"Even Sum     ="<<sumEven<<endl;
    cout<<"Odd Sum     ="<<sumOdd<<endl;

    return 0;
}

