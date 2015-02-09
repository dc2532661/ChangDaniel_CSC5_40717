/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch7 ProgChal 5
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const int MONKEYS = 3;
const int DAYS = 7;
//Function Prototypes
float familyAverage(const float mf[MONKEYS][DAYS]);
float littleMeal(const float mf[MONKEYS][DAYS]);
float bigMeal(const float mf[MONKEYS][DAYS]);
//Execution Begins Here!

int main(int argc, char *argv[])
{
   //Declare Variables
   float monkey_table [MONKEYS][DAYS]={0};
    int x, y;      
   
                 
   cout << showpoint << fixed << setprecision(2) << endl;
   
   
   cout << "\t\t\t\tMonkey business " << endl;
   cout << endl;
   
 

   for (x = 0; x < MONKEYS; x++)
   {
      for (y = 0; y < DAYS; y++)
      {
        do
        {    
            cout << " \tEnter the number of pounds eaten for";    
            cout << " Monkey # " << x+1 << " ";
            cout << " Day " << y+1 << ": ";
            cin >> monkey_table [x][y];
           
           
           

         if(monkey_table [x][y] < 0)
            cout << "\t Please enter a positive number for pounds of food." << endl;

         }
         while(monkey_table [x][y] < 0);
     
      }
      cout << endl;
   }
    cout << " \t\tThe average amount of food eaten per day" << endl;
    cout << " \t\tby the whole family of monkeys ";
    cout << " is " << familyAverage(monkey_table)<< " lbs" << endl;
    cout << endl;
   
    cout << " \t\tThe minimum amount of food eaten during" << endl;
    cout << "the week by any one monkey is " << littleMeal(monkey_table)<< " lbs" << endl;
    cout << endl;
   
    cout << "\t\tThe most amount of food eaten during the" << endl;
    cout << "\t\tweek by any one monkey is " << bigMeal( monkey_table ) << " lbs" << endl;
    cout << endl;
  
    return EXIT_SUCCESS;
}


float familyAverage(const float mf[MONKEYS][DAYS])
{
    float total = 0;

    for (int x = 0; x < MONKEYS; x++)
            for (int y = 0; y < DAYS; y++)
                total += mf[x][y];
            total= (total / DAYS) / 3;
           
    return total;
}


float littleMeal(const float mf[][DAYS], const int monkey)
{
    float small = 0;

    for (int y = 0; y < DAYS; y++)
        if (mf[monkey][y] < small)
            small = mf[monkey][y];
                   
    return small;
}

float bigMeal(const float mf[MONKEYS][DAYS])
{
   float big= 0;

    for (int x = 0; x < MONKEYS; x++)
            for (int y = 0; y < DAYS; y++)
                if (mf[x][y] > big)
                    big= mf[x][y];
                   
    return big;
}