/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 3:38 PM
 * Purpose:Gaddis 8thEd Ch4 ProgChal4
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    float Area1;
    float Area2;
    float Length1;
    float Length2;
    float Width1;
    float Width2;
//input the variables and calculation
cout<<"What is the first rectangles of length?\n"<<endl;
cin>>Length1;
cout<<"What is the first rectangles of width?\n"<<endl;
cin>>Width1;
Area1=Length1*Width1;
cout<<"What is the second rectangles of length?\n"<<endl;
cin>>Length2;
cout<<"What is the second rectangles of width?\n"<<endl;
cin>>Width2;
Area2=Length2*Width2;
//output the answer
if(Area1>Area2)
    cout<<"Rectangles 1 is greater than rectangles 2"<<endl;
else if(Area2>Area1)
    cout<<"Rectangles 2 is greater than rectangles 1"<<endl;
else
    cout<<"Both area are same."<<endl;
    return 0;
}

