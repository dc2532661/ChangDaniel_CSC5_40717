/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 2:41 PM
 * Pirpose: Gaddis 8thEd Ch5 ProgChal 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
 int sum = 0;
    int i = 1;
    int num;
    cout<<"Input a number for the end number"<<endl;
    cin>>num;
    while (i <= num) {
        sum += i;
        i++;
    }
    cout<< "The total from 1 to the end is = " << sum << endl;
 
    return 0;
}

