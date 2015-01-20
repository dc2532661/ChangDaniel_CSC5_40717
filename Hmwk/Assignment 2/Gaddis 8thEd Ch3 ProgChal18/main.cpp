/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 2:08 PM
 * Purpose: Gaddis 8thEd Ch3 progChal18
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
    float Num1;
    float Num2;
    float Total;
//output the number
cout<<"put the first number"<<endl;
cin>>Num1;
cout<<"put the second number"<<endl;
cin>>Num2;
cout<<Num1<<" "<<"+"<<" "<<Num2<<" "<<"="<<endl;
//calculation
Total=Num1+Num2;
//output the answers
cout<<Num1<<" "<<"+"<<" "<<Num2<<" "<<"="<<" "<<Total<<endl;

    return 0;
}

