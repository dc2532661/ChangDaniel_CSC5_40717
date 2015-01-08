/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 8, 2015, 3:18 AM
 * Purpose: How easy computers can make mistake
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !

int main (int argc, char** argv) {
    //Declare 3 variables
    float a,b,c;
    //Prompt for a and b
    cout<<"Input 2 float values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the results
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //exit stage right !
    return 0;  
}
