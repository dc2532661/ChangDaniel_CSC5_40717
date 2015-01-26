/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 7:02 PM
 * Purpose:Gaddis 8thEd Ch6 ProgChal 5
 */
//System Library
# include <iostream>
# include <cmath>
# include <string>
using namespace std;
//User Libraries

//Global Constants
const float g = 9.8;
int t;
float d;
//Function Prototypes
void fallingDistance2(float &);
float fallingDistance1(float);
//Executions begin here !




int main(){
    
cout<<"calculated by passby values.\n";
cout<<"Time \t\t Distance\n";
cout<<"-------------------\n";
for (t=1;t<=10;t++)
{
fallingDistance1(d);
cout<<t<<"\t\t"<<d<<endl;
}


cout<<"calculated by reference values.\n";
cout<<"Time \t\t Distance\n";
cout<<"-------------------\n";
for (t=1;t<=10;t++)
{
fallingDistance2(d);
cout<<t<<"\t\t"<<d<<endl;
}
return 0;
}


float fallingDistance1(float d)
{
d=0.5*9.8*t*t;
return d;
}

void fallingDistance2(float &refd)
{
refd=0.5*9.8*t*t;
}
