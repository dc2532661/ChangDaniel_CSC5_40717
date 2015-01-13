/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 13, 2015, 10:51 AM
 * Purpose:Savitch 8Ed Ch2 Prob 1
 */

#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const float CMTNONS=3.527392e4f;//conversion from metric tons to 
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    float wtPackOz;//weight of cereal contents in ounce
    float wtPackTn;//weight of cereal contents in metric tons
    float nPackTn;//Number of cereal boxes in a metric tons
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric tons = >"<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
    //Prompt user for cereal weights   
    cout<<"Input the number of ounces on the cereal"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric tons = >"<<nPackTn<<endl;
    }
    
    return 0;
    
}

