/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 13, 2015, 10:16 AM
 * Purpose:Bitcoin conversion
 */
//Sales Prediction
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare variables and initialize
    float bcToDlr=232.8;//Jan 13th, 2015 10:17am
    float erToDlr=0.849381;//same date
    float ynToDlr=118.03;//same date
    float bitcoin, dollars, euros, yen;
    //input the number of bitcoin and then convert
    cout<<"input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //Covert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    //Exit stage right!
    return 0;
}

