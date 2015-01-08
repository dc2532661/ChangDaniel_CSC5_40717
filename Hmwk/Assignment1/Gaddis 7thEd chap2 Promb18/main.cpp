/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 6, 2015, 10:30 AM
 * Purpose: Hmwk, Solution to free fall problem
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//(Percent conversion)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//(Customers Serveyed)
    char perEDRK=14;//Percentage Energy Drinkers
    char perCDRK=64;//percentage citrus Drinkers
   //Calculate customer numbers requested
    short custE=custSrv*perEDRK/CONVPCT;//Energy Drinkers
    short custC=custE*perCDRk/CONVPCT;//Citrus Drinkers
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers"
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers"
    cout<<custC<<endl;
    //Exit stage right
    return 0;
}
   
  