/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 21, 2015, 8:20 AM
 * Purpose:Maximun random number
 */

//System Libraries

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const unsigned int MAXRAND=pow(2,31);

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a max variable
    int loop=2147000000;
    int max=rand();
    //Loop to find the maximum random number
    for(int i=2;i<=loop;i++){
        int r=rand();
        if(r>max)max=r;
    }
    // output the result
    cout<<"2^31 = "<<MAXRAND<<endl;
    cout<<" Maximum found = "<<max<<endl;
    //Exit stage right
    return 0;
}