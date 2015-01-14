/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 14, 2015, 11:20 AM
 * Purpose:
 */

//system Library
#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;
//user Library

//Global Constants

//Function types

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float i;//Interest Rate per cent
    float t;//Temp variable per cent per year
    float l;//Loan amount $'s
    unsigned short n;//Number of month
    float mp;//Monthly Payment $'s
    //Input the variables required
    cout<<"What is the interest rate in per cent per year !"<<endl;
    cin>>i;
    i/=100;//Convert to decimal
    cout<<"What is the Loan amount $'s(floating format"<<endl;
    cin>>1;
    cout<<"Number of monthly payment(formate integer)"<<endl;
    cin>>n;
    //Calculation the monthly payment
    if(i<=0){
        mp=1/n;
    }else{
        t=pow(1+i, n);
        mp=i*t*1/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = $"<<mp<<endl;
    //exit stage right!
    
    
    return 0;
}

