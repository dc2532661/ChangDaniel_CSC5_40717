/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 3:15 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 3
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
    const int MinYear=1;
    const int MaxYear=25;
    int Num=MinYear;
    cout<<"Year   rising millimeter\n";
    cout<<"----------------------------\n"<<endl;
    while(Num<=MaxYear){
        cout<<Num<<"\t\t"<<Num*1.5<<endl;
        Num++;
    }
    return 0;
}
