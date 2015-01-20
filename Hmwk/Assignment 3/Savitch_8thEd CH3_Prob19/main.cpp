/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 20, 2015, 10:31 AM
 * Purpose:Savitch 8thEd Ch3 Prob19
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare Variables
    char thPick=23;
    bool computer;
    short nPckRmv;
//Playing the game
do{
    //Designate the player
    computer=false;
     //Ask player how many tooth picks to remove
    do{
   
    cout<<"They are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
    cout<<"how many tooth picks do you want to remove?"<<endl;
    cout<<"Choose 1,2 or3"<<endl;
    cin>>nPckRmv;
    }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
    //Remove the number of toothpicks
    thPick-=nPckRmv;
    //Designment the computer
    computer=true;
    //Utilize logic from the book
    if(thPick>4){
        nPckRmv=4-nPckRmv;
        thPick-=nPckRmv;
    }else if(thPick>=2&&thPick<=4){
      thPick=1;  
    }  else if(thPick==1){
        thPick=0;
        computer=false;
    }  
    }while(thPick>1);
//output the winner and loser
    if(computer){
        cout<<"Computer wins you lose!"<<endl;
    }else{
        cout<<"Computer loses we win"<<endl;
    }

//Exit the game
    return 0;
}

