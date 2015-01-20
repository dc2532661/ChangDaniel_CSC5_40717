/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 11:36 AM
 * Purpose: Gaddis 8thEd Ch3 ProgChal3
 */
//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here


int main(int argc, char** argv) {
//Declare Variables    
    int Test1;
    int Test2;
    int Test3;
    int Test4;
    int Test5;
    float AveTest;//Average of test
//input the test scores
cout<<"what is your test 1 score?\n"<<endl;
cin>>Test1;
cout<<"what is your test 2 score?\n"<<endl;
cin>>Test2;
cout<<"what is your test 3 score?\n"<<endl;
cin>>Test3;
cout<<"what is your test 4 score?\n"<<endl;
cin>>Test4;
cout<<"what is your test 5 score?\n"<<endl;
cin>>Test5;
//Calculation average
AveTest=(Test1+Test2+Test3+Test4+Test5)/5;
//Output the average
cout<<"The average of you test score is : "<<AveTest<<endl;
        
    return 0;
}

