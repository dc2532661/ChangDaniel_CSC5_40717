/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *Created on January 10, 2015, 9:53 PM
 * Purpose: Gaddis 8Ed Ch2 ProgChal 3
 */
//The program will compute the total sales tax that
//will be the state sales in 0.04
//the country sales tax is 0.02;
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Compute the total sales tax
    float TotalSalesTax = 95, Purchase;
    
//Calculate and display 4% for state sales tax
    Purchase = TotalSalesTax * 0.04;
    cout<<"4 percent of state sales tax is $"<<Purchase
            <<"from total sales tax $95\n";
//Calculate and display 2% for country sales tax
    Purchase = TotalSalesTax*0.02;
    cout<<"4 percent of country sales tax is $"<<Purchase
            <<"from total sales tax $95\n";
    //Exit stage right
    return 0;
}

