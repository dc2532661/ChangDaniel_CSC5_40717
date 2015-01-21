/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on January 21, 2015, 8:53 AM
 */
//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    int nFactrl=1,n;
    //Prompt user for factorial
    cout<<"what N would you like to use to "<<endl;
    cout<<"calculate N ! "<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<" ! = "<<nFactrl<<endl;
    //exit stage right!
    return 0;
}

