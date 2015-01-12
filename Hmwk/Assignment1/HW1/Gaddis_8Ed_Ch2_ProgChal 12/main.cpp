/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 11, 2015, 3:12 PM
 * Purpose: Gaddis_8Ed_Ch2_ProgChal 12
 */
//Changing the unit Square feet to Acre
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
     float AfterChanging;//how many acre equal 391876 square feet of land
    float Acre=43560;//1 acre = 43560 square feet
    float Total=391876;//There has 391876 square feet of land
    //Calculate and display how many acre equal 391876 square feet of land
    AfterChanging=391876/43560;
    cout<<"There has a land with"<<Total<<"\nin square feet\n"
            <<"which is equal"<<AfterChanging<<"\nacre\n";
    //Exit stage right
    return 0;
}

