/* 
 * File:   main.cpp
 * Author: Daniel Chang 
 * Created on January 10, 2015, 5:08 PM
 * Purpose: HomeWork Assignment(Gaddis Ed8 Ch2 ProChal 2 
 */
//Sales Prediction
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main ()  {
    int Percent;
    int Money;
    int FinalGenerate;
    Percent=0.58;
    Money=8600000;
    FinalGenerate=Percent*Money;
    FinalGenerate=0.58*8600000;
    FinalGenerate=4988000;        
            cout<<"If the company has"<<Money<<"in sales this year"<<endl;
            cout<<"the East Coast division will generate"<<FinalGenerate<<endl;
//Exit stage right
            return 0;
}