/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch7 ProgChal 2
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void tableFormat(string,string,string,string);
void tableFormat(float,float,float,float);
//Execution Begins Here!

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    float avgRain = 0;
    float rainSum = 0;
    int count = 0;
    float monthlyTotals[12];
    string outRainSum;
    float lowpoint=100000;
    float highpoint=0;
    string lowMonth;
    string highMonth="January";
    string monthNames[] = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
	cout << "Please enter the amount of rainfall for each month, and press enter after each: " << endl;
	for (count = 0; count <= 11; count++)
	{
		cout << monthNames[count] << " : ";
		cin >> monthlyTotals[count];
		while (monthlyTotals[count] < 0)
		{
			cout << "Please reenter a positive number for the month of " << monthNames[count] << endl;
			cin >> monthlyTotals[count];
		}
	}
		
	
	for (count =0; count <=11; count++)
		rainSum = rainSum + monthlyTotals[count];
	avgRain = rainSum / 12;
	for (count = 0; count <=11; count++)
	{	cout << endl;
		cout << monthNames[count] << "\t" << monthlyTotals[count] << endl;
	}
	highpoint = monthlyTotals[0];	
	for (count=0; count<=11; count++) 
	{
	if (monthlyTotals[count] >= highpoint)
	{
		highpoint = monthlyTotals[count];
		highMonth = monthNames[count];
	}
	}
	lowpoint = monthlyTotals[0];	
	for (count=0; count<=11; count++) 
	{
		if (monthlyTotals[count] <= lowpoint)
		{
		lowpoint = monthlyTotals[count];
		lowMonth = monthNames[count];
		}
	}
	tableFormat("Total","Average","Lowpoint","Highpoint");
	tableFormat(rainSum, avgRain, lowpoint,highpoint);
	cout << "The month(s) with the lowest rainfall is ";
	for (count=0; count <=11; count++)
	 
		if (monthlyTotals[count] == lowpoint)
			cout << monthNames[count] << ", ";
	
	cout << "with a rainfall of: "<< lowpoint << "." << endl;
	cout << "The month(s) with the highest rainfall is ";
	for (count=0; count <=11; count++)
		
		if (monthlyTotals[count] == highpoint)
			cout << monthNames[count] << ", ";
	
	cout << " with a rainfall of: "<< highpoint <<"." << endl;
	
	return 0;
}

void tableFormat(string colA,string colB,string colC,string colD)
{
	cout <<setw(15) << fixed <<  colA <<setw(15) << fixed <<  colB <<setw(15) << fixed <<  colC <<setw(15) << fixed <<  colD <<endl;
}
void tableFormat(float colA,float colB,float colC,float colD)
{
	cout << setprecision(3)<<setw(15) << fixed <<  colA <<setw(15) << fixed <<  colB <<setw(15) << fixed <<  colC <<setw(15) << fixed <<  colD << "stole this from C++.com" << endl;
}