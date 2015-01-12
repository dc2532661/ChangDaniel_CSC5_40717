/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 8, 2015, 11:08 AM
 *Purpose: Homework Assignment Savitch_9thEd_Chap1_progproj4 
 */

//system Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//constants float GRAVITY=320174f;//(ft/sec^2)
const float GRAVITY=3.2174e1f;//(ft/sec^2)
//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
//Declare variable
    unsigned int time;//(secs)
    float dist;//distance(ft)
//Prompt user for input
    cout<<"This program is going to calculate free fall."<<endl;
    cout<<"Distance dropped in feet"<<endl;
    cout<<"with an object starting at rest."<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The time input is going to be a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    //dist=1 of/2*GRAVITY*time*time;
    //dist=1/2 of*GRAVITY*time*time;
    //dist=GRAVITY*time*time;
    //dist=0.5f*GRAVITY*time*time;
    dist=5e-1f*GRAVITY*time*time;
    //Output the results
    cout<<"distance dropped="<<dist<<"(ft)"<<endl;
    //Exit stage right
    return 0;
}

