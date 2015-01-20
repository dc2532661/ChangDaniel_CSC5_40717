/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 1:49 PM
 * Purpose: Gaddis 8thEd Ch3 ProgChal13
 */
//System Library
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variables
    float Dollar;
    float Yen=98.93;//1 dollar=98.93
    float Euro=0.74;//1 dollar=0.74
    float YenT;//Total
    float EuroT;//Total
//input the dollars
cout<<"How much money do you have ?"<<endl;
cin>>Dollar;
//Calculation
YenT=Dollar*Yen;
EuroT=Dollar*Euro;
//output the variables
cout<<setprecision(2);
cout<<"Your money = "<<YenT<<" "<<"Yen"<<endl;
cout<<"Your money = "<<EuroT<<" "<<"Euros"<<endl;

    return 0;
}

