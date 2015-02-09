/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch8 ProgChal 1
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool searchList(long [], int, long);
//Execution Begins Here!
const int SIZE = 18;

long chargeAccount,

results;

int main(int argc, char** argv) 

{ 

    long tests[SIZE] = {5658845, 450125, 7895122, 8777541, 8451277,1302850,

       8080152, 4562555, 5552012, 5050552, 7825877, 1250255,1005231, 654231,

       3852085, 7576651, 7881200, 4581002}; 



    results;

    cout << "Enter your Charge Account Number: " << endl;

    cin  >> chargeAccount;

 

 

    results = searchList (tests, SIZE, results); 

 

    if (results == -1) 

    cout << "You Entered a Valid Number.\n"; 

  

    else

    { 

    cout << "You Entered an Invalid Number.\n";  

    cout << (results + 1) << ".\n"; 

    }  

    return 0; 

} 

 

bool searchList(long list[], int numElems, long value) 

{ 

int index = 0;              

int position = -1;         

bool found = false;        



while (index < numElems && !found) 

{ 

  if (list[index] == value)  

     { 

       found = true;           

       position = index;      

     } 

     index++;                   

   } 

  return position;             

}