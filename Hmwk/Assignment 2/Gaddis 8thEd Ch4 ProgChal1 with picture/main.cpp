/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 2:47 PM
 * Purpose: Gaddis 8thEd Ch4 ProgChal1
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variables
    int X;
    int Y;
//input the number
cout<<"what is the first number that you want to input ?\n"<<endl;
cin>>X;
cout<<"what is the second number that you want to input ?\n"<<endl;
cin>>Y;
//output the answer
cout<<" First number is = "<<X<<" and the second number is = "<<Y<<endl;
if (X > Y)
cout << X << " is the larger number" << endl;

else if (Y > X)
cout << Y << " is the larger number" << endl;

else 
cout << "both numbers are equal" <<endl;
     
    return 0;
}

