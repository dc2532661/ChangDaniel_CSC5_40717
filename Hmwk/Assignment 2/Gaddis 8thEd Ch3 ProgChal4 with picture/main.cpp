/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 11:45 AM
 * Purpose: Gaddis 8thEd Ch3 ProgChal4
 */

//System Library
#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variables    
    float Amount1, Amount2, Amount3;
    string Month1, Month2, Month3;
    float AveAm;//Average of Amount
//Input the information
cout<<"Enter a month's name";
cout<<"by using Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec "<<endl;
cin>>Month1;
cout<<"What is the amount of the rain that fell in the month in inches ?\n"<<endl;
cin>>Amount1;
cout<<"Enter a month's name";
cout<<"by using Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec "<<endl;
cin>>Month2;
cout<<"What is the amount of the rain that fell in the month in inches ?\n"<<endl;
cin>>Amount2;
cout<<"Enter a month's name";
cout<<"by using Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec "<<endl;
cin>>Month3;
cout<<"What is the amount of the rain that fell in the month in inches ?\n"<<endl;
cin>>Amount3;
//Calculate the average 
AveAm=(Amount1+Amount2+Amount3)/3;
//output the answer
cout<<"The average of rain in "<<Month1<<"  "<<Month2<<"  "<<Month3<<"  ";
cout<<"amount is : \n"<<AveAm<<endl;
         return 0;
}

