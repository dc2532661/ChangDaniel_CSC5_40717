/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 11, 2015, 3:59 PM
 * Purpose:Gaddis_8Ed_Chap2_ProgChal 17
 */
//Stock Commission
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Introduce the question
    float Stock=750;//She bought 750 shares of stock
    float Price=35;//35 dollor per stock
    float Comm=0.02;//2 percent commission for the transaction
    short AmountPaid;//The amount paid for the stock alone
    short AmountComm;//The amount of the commission
    short Total;//The total paid
//Calculate price
    AmountPaid=Stock*Price;
    AmountComm=Price*Comm*750;
    Total=Stock*Price+Price*Comm*750;
//output the results
cout<<"The amount paid for the stock alone is"<<AmountPaid<<"dollor"<<endl;
cout<<"The amount of the commission is"<<AmountComm<<"dollor"<<endl;
cout<<"The total amount paid is"<<Total<<"dollor"<<endl;
//Exit stage right
    return 0;
}

