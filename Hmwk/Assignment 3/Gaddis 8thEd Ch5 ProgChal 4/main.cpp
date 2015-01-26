/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 3:15 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 4
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
    const int MinMinu=5;
    const int MaxMinu=30;
    int Num=MinMinu;
    cout<<"Minutes   Calories\n";
    cout<<"----------------------------\n"<<endl;
    while(Num<=MaxMinu){
        cout<<Num<<"\t\t"<<Num*3.6<<endl;
        Num++;
        Num++;
        Num++;
        Num++;
        Num++;
        
    }
    return 0;
}
