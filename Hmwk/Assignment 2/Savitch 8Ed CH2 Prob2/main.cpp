/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 14, 2015, 10:35 AM
 * Purpose: Savitch 8Ed Ch2 Prob2
 */

//system Library
#include <iostream>

using namespace std;
//user Library

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function types

//Execution Begins here!
int main(int argc, char** argv) {
//Declare Variables
    const float CONC=1e-3f;//Sweetener concentration
    float wtCoke=3.5e2f;//weight of coke in grams
    float kMouse=5.0f;//Quantity of sweetener that kills a mouse in grams
    float wtMouse=3.5e1f;//weight of mouse in grams
    float kPer, wtDsPer;
    int nCans;
    //Input the desire the weight of a person
    cout<<"Input your desired weight in lbs"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//Convert to gram
    //Calculation
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //output the limit of what you can drink
    cout<<"Number of cans of diet coke";
    cout<<"that will kill you ="<<nCans<<endl;
    //Exit Stage right!        
    
    return 0;
}

