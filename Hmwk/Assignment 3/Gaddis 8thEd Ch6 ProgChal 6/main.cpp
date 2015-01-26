/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 7:08 PM
 * Purpose: Gaddis 8thEd Ch6 ProgChal 6
 */
//System Library

#include<iostream>
#include<cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float KE (float, float); 
float kineticEnergy (float v, float m) 
//Executions begin here !


{
float KE=0.5*m*pow(v,2);
return KE; 
}
int main ()
{
float mass, velocity;
cout<<"Enter mass=";
cin>>mass;
cout<<"Enter Velocity=";
cin>>velocity;
cout<<"kinetic Energy=";
cout<<kineticEnergy(velocity, mass)<<endl;
return 0;
}