/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 25, 2015, 7:34 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 13
 */
//System Library
#include<iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int num_emp_f();
int num_days_f(int num_emp);
float avg_abs_f(int num_emp, int num_days);
//Executions begin here !


int main()
{
int num_emp = 0;
int num_days = 0;
float avg_abs = 0.0;
cout << "Average employee absent days last year: " << avg_abs;

return 0;
}
int num_emp_f()
{
int num_emp;

cout << "Enter # of Employees";
cin >> num_emp;

while(num_emp < 1)
	{
		cout << "INVALID, # of employees must be > 1.";
		cout << "Enter # of Employees";
		cin >> num_emp;
	}	

	cout << "# of employees = " << num_emp;
}
int num_days_f(int e)
{
int num_days;

    for(int e = 0; e = num_days; e++)
	{
		cout << "Enter # of Days each employee missed last year";
		cin >> num_days;
	}
	
	while(num_days < 0)
	{
		cout << "INVALID, # of days missed must be atleast 0.";
		cout << "Enter # of Days each employee missed last year";
		cin >> num_days;
	}

	cout << "# of Days missed = " << num_days;
}
float avg_abs_f(int e, int d)
{
int num_emp;
int num_days;
float avg_abs;

avg_abs = (num_emp*365)/num_days;

}