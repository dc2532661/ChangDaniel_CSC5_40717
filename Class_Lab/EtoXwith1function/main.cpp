/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on January 21, 2015, 8:53 AM
 */
//System Library
#include <iostream>
#include <cmath>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int nFactrl(int);
//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    float approxEx=1, exactEx, x;
    //Prompt the user for the rower of E^x
    cout<<"What x in e^x would you like to use ?"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++){
    int nFactrl=1;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    approxEx+=(pow(x,n)/nFactrl);
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //compare the results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x = "<<exactEx<<endl;
    //exit stage right!
    return 0;
}
int nFactrl(int n)  {
   //Declare the variables
    //Note: Function only works for value 0 to 13
    
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13){
     for(int i=1;i<=n;i++){
        factorial*=i;
     }
     return factorial;
    }else{
        return -1;
    }
}