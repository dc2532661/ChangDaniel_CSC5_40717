/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 25, 2015, 7:39 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 15
 */
//System Library
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float Costs(int numDays, float ratePerday, float lab, float medication);     
float Costs(float lab, float medication);

//Executions begin here !




int main()
{
int stay;
float totalIn;
float totalOut;
int numDays;
float ratePerday, lab, medication;
      
// Get choice of inpatient or outpatient hospital stay
cout << "You will need to enter a 0 for inpatient stay or a 1 for outpatient stay." << endl;
cin >> stay;

// Validate the choice
       while (stay != 0 && stay != 1)
       {
              cout << "Please enter 0 for inpatient stay or a 1 for outpatient stay." << endl;
              cin >> stay;
       }
      
       // Process selection
       switch(stay)
       {
       // Inpatient Stay
       case 0:      
              cout << "Please enter the number of days spent at the hospital: " << endl;
              cin >> numDays;
              cout << "Please enter the hospital's daily rate: " << endl;
              cin >> ratePerday;
      
              cout << "Please enter the charges for labwork: " << endl;
              cin >> lab;
              cout << "Please enter the charges for medications: " << endl;
              cin >> medication;
              totalIn = Costs(numDays, ratePerday, lab, medication);
              cout << "The total inpatient costs are: $" << totalIn << endl;
              break;

       // Outpatient Stay
       case 1:
              cout << "Please enter the charges for labwork: " << endl;
              cin >> lab;
              cout << "Please enter the charges for medications: " << endl;
              cin >> medication;
              totalOut = Costs(lab, medication);
              cout << "The total outpatient costs are: $" << totalOut << endl;
              break;
       }

     
       return 0;
}


float Costs(int numDays, float ratePerday, float lab, float medication)
{
// Calculate total inpatient costs
  return (numDays * ratePerday) + lab + medication;
}

// function for Outpatient Stay
float Costs(float lab, float medication)
{ // Calculate total inpatient costs
       return lab + medication;
}