/* 
 * File:   main.cpp
 * Author: Daniel Chang
 *
 * Created on January 26, 2015, 10:06 AM
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Executions begin here !
int main(int argc, char** argv) {
//Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    int x,y,begTim,endTim,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTim=10;
    begTim=static_cast<unsigned int>(time(0));
    //Prompt the user for an answer
    cout<<"what is "<<x<<" + "<<y<<endl;
    cout<<"You have"<<totTim<<"to answer"<endl;
    cout<<"Wait for the next prompt!!!"<<endl;
    do{
        endTim=static_cast<unsigned int>(time(0));
    }while(endTim-begTim<5);
    cout<<"Your answer is?"<<endl;
    cin>>ans;
    //Determine if correct
    if(ans==(x+y))cout<<"You are correct!"<<endl;
    else cout<<"You are wrong"<<endl;
    //Exit Stage right
    return 0;
}

