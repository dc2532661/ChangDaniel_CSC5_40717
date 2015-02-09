/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 29, 2015, 7:33 PM
 * Purpose: Project 1
 */
//System Library
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(void){
//Declare Variables
   int your,comp,win = 0,count = 0,win_count = 0,lose_count = 0;
   
   do{

     your = 0;

     while((your>3) || (your<1)){
     
     cout << "You already play"<<count<<"games!!\n ";
     cout << "--------------\n";
     cout << "１．Scissors\n";
     cout << "２．Rock\n";
     cout << "３．Paper\n";
     cout << "--------------\n";
     cout << "Please pick one of these from the top：";
     
     cin >> your ;
     
     switch(your){

     case 1:
     cout << " You pick Scissors!!\n";
     break;
     
     case 2:
     cout << " You pick Rock!!\n";
     break;

     case 3:
     cout << " You pick Paper!!\n";
     break;
     
     default :
     cout<<"Please pick 1,2 or 3,do not pick another number!!"<<endl;

     }
     
     }

     comp = 0;

     while(comp == 0){

     comp = rand() % 4;

     }
     
     switch(comp){

     case 1:
     cout << "Computer pick Scissors!!\n\n" ;
     break;

     case 2:
     cout << "Computer pick Rock!!\n\n" ;
     break;

     case 3:
     cout << "Computer pick Paper!!\n\n" ;
     break;
     }

     count++;
     
     
     if((your == 1 && comp == 3) || (your == 2 && comp == 1) || (your == 3 && comp == 2)){

     ++win_count;

     cout << "You win!!\n\n" ;
     
     }
     else{

     if((your == 1 && comp == 1) || (your == 2 && comp == 2) || (your == 3 && comp == 3)){

     cout << "Tie!!\n\n" ;

     }
     else{
     cout << "You loss!!\n\n" ;

     ++lose_count;
     }
     }
     
   }while(win_count < 2 && lose_count < 2);

   if(win_count == 2) 
     cout << "You won two games, Championship is you!!!!!!!!!\n";

   if(lose_count == 2) 
     cout << "You lost two games, you will be championship next time!\n";
     
   
     
   return 0;

}