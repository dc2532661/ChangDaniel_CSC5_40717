/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 3:15 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 6
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
    float TotaDist;
    float Speed;
    float MinHour=1;
    float MaxHour;
    int Hour;
    
    //input
    cout<<"How many hours has it traveled?"<<endl;
    cin>>Hour;
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>Speed;
    //calculation
    TotaDist=Speed*Hour;
    //output
    cout<<"Hour   Distance Traveled\n";
    cout<<"----------------------------\n"<<endl;
    for(Hour=MaxHour;Hour>=MinHour;Hour++){
        
        cout<<Hour<<"\t\t"<<TotaDist<<endl;
      
    }
    return 0;
}