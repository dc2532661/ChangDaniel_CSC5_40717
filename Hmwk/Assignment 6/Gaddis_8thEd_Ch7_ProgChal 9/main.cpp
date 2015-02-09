/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch7 ProgChal 9
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main (int argc, char** argv)
{
	const int numOfEmployees = 7;
	int long empId[numOfEmployees]= {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
	int hours[numOfEmployees];
	float payRate[numOfEmployees];
	float wages[numOfEmployees];
	
	cout<< "Enter the hours worked by 7 employees and their hourly pay rates.\n";
	for (int count = 0;count < numOfEmployees;count++)
	{
		cout<< "Hours worked by employee #"<<empId[count]<< ":";
		cin>> hours[count];
		while (hours < 0)
		{
			cout<<"Please enter a positive number: ";
			cin>> hours[count];
		}
		cout<< "Hourly pay rate for employee #"<<empId[count]<<":";
		cin>> payRate[count];
		while (payRate[count] < 6.00)
		{
			cout<< "Please enter a pay rate higher than $6.00: ";
			cin>> payRate[count];
		}
	}
	
	for (int count = 0;count < numOfEmployees;count++)
	{
		wages[count]= hours[count] * payRate[count];
		cout<<"Here is the gross pay for each employee:\n";
		cout<<fixed<<showpoint<<setprecision(2);
		cout<< "Employee #"<<empId[count]<<": $"<<wages[count]<< endl;
	}
	return 0;
}