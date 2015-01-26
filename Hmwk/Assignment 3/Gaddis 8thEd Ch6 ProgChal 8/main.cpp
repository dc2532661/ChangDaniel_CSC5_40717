
/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 7:24 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 8
 */
//System Library
#include<iostream>
#include<ctime>
#include <stdlib.h>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void CoinToss();
int CalculateTotal(int,int);
//Executions begin here !



int main(){
 
  srand((unsigned)time(0));

 CoinToss();

 system("pause");
 return 0;
}
void CoinToss(){

 int TAILS=1;
  int he=0;
 
 for(int x =0; x < 10; x ++){
 
 int rnge = (rand() % 2)+1;
 
 if(rnge==1){
  
  cout<<"HEADS" <<endl;
  he=he+1;
 
 
 }else{
  
  cout<<"TAILS" <<endl;
  TAILS=TAILS+1;

 }//end of if else

}//end of for loop

 
 
 cout<<"Total Heads : "<<he<<endl;
 cout<<"Total Tails : "<<TAILS<<endl;
 cout<<"Total Winnings : $"<<CalculateTotal(he,TAILS)<<endl;

}//end of function

int CalculateTotal(int heads, int tails){


 int sum = heads;
 sum = sum - tails;
 return sum ;

}