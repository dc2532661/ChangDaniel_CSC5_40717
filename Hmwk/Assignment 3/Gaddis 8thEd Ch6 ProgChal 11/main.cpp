/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 6:04 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 11
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float aver, min, max, input;
    cout<<"What is Judge 1's score!"<<endl;
    cin>>input;
    aver=max=min=input;
    //For loop to read in the next 4 values
    for(int readin=2;readin<=5;readin++){
        cout<<"What is Judge #"<<readin<<"'s score!"<<endl;
        cin>>input;
        if(max<input)max=input;
        if(min>input)min=input;
        avg+=input;
    }
    //Calculate the average
    aver=(aver-min-max)/3;
    //Output the result
    cout<<"The average = "<<aver<<endl;
    //Exit Stage Right!
    return 0;
}