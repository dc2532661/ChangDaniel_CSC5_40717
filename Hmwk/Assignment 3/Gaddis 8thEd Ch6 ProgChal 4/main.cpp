/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 25, 2015, 6:58 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 4
 */
//System Library
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void findLowest();
int getNumAccidents();
//Executions begin here !

int main(){
float north, south, east, west, central;

cout<<"Where going to determine which region in your city had the least number of accidents"<<endl;



int getNumAccidents(int north, int south, int east, int west, int central);
{
cout<<"Please enter the number of accidents each region had"<<endl;
cout<<"How many accidents did the North region have:"<<endl;
cin>>north;
cout<<"How many accidents did the South region have:"<<endl;
cin>>south;
cout<<"How many accidents did the East region have:"<<endl;
cin>>east;
cout<<"How many accidents did the West region have:"<<endl;
cin>>west;
cout<<"How many accidents did the Central region have:"<<endl;
cin>>central;
}

while(north>0 && south>0 && east>0 && west>0 && central>0)
{
cout<<"Please enter a positive number of accidents for each region"<<endl;
cout<<"How many accidents did the North region have:"<<endl;
cin>>north;
cout<<"How many accidents did the South region have:"<<endl;
cin>>south;
cout<<"How many accidents did the East region have:"<<endl;
cin>>east;
cout<<"How many accidents did the West region have:"<<endl;
cin>>west;
cout<<"How many accidents did the Central region have:"<<endl;
cin>>central;

cout<<north<<south<<east<<west<<central;
return 0;
}
}