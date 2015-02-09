/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch8 ProgChal 2
 */

//System Libraries
#include <iostream> 
#include <string> 

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int LinearSearch (int [], int, int); 
//Execution Begins Here!

int main(int argc, char** argv) 
{ 
const int LOTTERY = 10; 
int nums [LOTTERY] = {13579, 26791, 26792,33445, 55555, 62483, 77777, 79422, 85647, 93121 }; 
int item, location; 
int anna; 

do
{ 
cout << "Enter your lottery number: "; 
cin >> item; 

location = LinearSearch (nums, LOTTERY, item); 
if ( location >-1) 
cout << "Your lottery ticket was a winner" << location << endl; 

else 
cout << "The lottery number was not found in the list \n"; 

cout<<"Enter 1 to continue, 0 to stop"; 
cin >> anna; //****if this is for repeating the task then put it in a loop 

} while (anna==1); 

return 0; 
} 

int LinearSearch (int list[], int size, int key) 
{ 
int i; 

for (i=0; i < size; i++)
{ 
if (list [i] == key)
return 1; 
} 
return -1;
}