/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 3:50 PM
 * Purpose:Gaddis 8thEd Ch4 ProgChal6
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
    char Weight;
    float Mass;
//output the number and calculate
cout<<"How much mass do you have ?";
cin>>Mass;
Weight=Mass*9.8;
//output the answer
if(Weight>1000)
    cout<<"It is too heavy!"<<endl;
else if(10>Weight)
    cout<<"It is too light!"<<endl;
else
    cout<<"You are very healthy"<<endl;
    return 0;
}