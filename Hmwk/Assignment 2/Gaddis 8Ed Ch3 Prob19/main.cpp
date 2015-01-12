/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 12, 2015, 11:38 AM
 * Purpose:Gaddis 8Ed Ch3 Prob19
 */
//system Library
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//user Library

//Global Constants

//Function types

//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables
    float intRate=0.0319f/12;
    float msrplus=4e4f;//Loan amount for Buick Avenir
    char nPaymnt=60;//number of monthly payment
    //Calculate the monthly payments
    float temp=pow((1+intRate), nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    
    cout<<"Interest per year in percent="<<intRate*100*12<<endl;
    cout<<"Number of payments="<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
     
    //output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}

