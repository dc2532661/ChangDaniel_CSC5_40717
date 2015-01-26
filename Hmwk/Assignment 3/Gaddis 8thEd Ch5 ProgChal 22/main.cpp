/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 5:58 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 22
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare a variable
    int widthHight;
    //input
    cout<<"How large do you want the character square"<<endl;
    cin>>widthHight;
    cout<<endl;
    for(int row=1;row<=widthHight;row++){
        for(int col=1;col<=2*widthHight;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right
    return 0;
}
