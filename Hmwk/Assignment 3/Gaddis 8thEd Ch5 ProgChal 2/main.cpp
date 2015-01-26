/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 2:53 PM
 * Purpose: Gaddis 8thEd Ch5 ProgChal 2
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
     int i = 0;
    int j = 1;
     
    while (i <=127) {
        while (j <=16) {
           cout<< i ++ << " ";
            j++;
        }
         
        j = 1;
        
      cout<< endl;
    }
 
 
    return 0;
}

