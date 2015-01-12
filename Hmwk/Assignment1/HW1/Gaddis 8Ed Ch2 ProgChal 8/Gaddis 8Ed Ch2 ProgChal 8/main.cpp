/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 11, 2015, 8:27 AM
 * Purpose: Gaddis 8Ed Ch2 ProgChal 8
 */
//Display each item's price, the subtotal of the sales, the amount of sales tax
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Each Items Price
    float Price1=15.95, Total1;
    float Price2=24.95, Total2;
    float Price3=6.95, Total3;
    float Price4=12.95, Total4;
    float Price5=3.95, Total5;
    float FinalTotal;
//Calculate and display the 7% of price of  item 1
    Total1=Price1*0.07;
    cout<<"The price for item 1 is $"<<Total1<<"with tax.\n";
//Calculate and display the 7% of price of  item 2
    Total2=Price2*0.07;
    cout<<"The price for item 2 is $"<<Total2<<"with tax.\n";
//Calculate and display the 7% of price of  item 3
    Total3=Price3*0.07;
    cout<<"The price for item 3 is $"<<Total3<<"with tax.\n";
//Calculate and display the 7% of price of  item 4
    Total4=Price4*0.07;
    cout<<"The price for item 4 is $"<<Total4<<"with tax.\n";
//Calculate and display the 7% of price of  item 5
    Total5=Price5*0.07;
    cout<<"The price for item 5 is $"<<Total5<<"with tax.\n";
//Calculate and display final total for each items add together
    FinalTotal=Total1+Total2+Total3+Total4+Total5;
    cout<<"The total price is going to be $"<<FinalTotal<<"with tax\n.";
//Exit stage right            
    return 0;
}

