/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 13, 2015, 9:16 AM
 * Purpose:
 */
//system Libraries
#include <iostream>

using namespace std;
//user Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X, Y;
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"  ";
    cout<<(((X^Y)^Y)?'T':'F')<<"  ";
    cout<<(((X^Y)^X)?'T':'F')<<"  ";
    cout<<(!(X||Y)?'T':'F')<<"  ";
    cout<<(!X&&!Y?'T':'F')<<"  ";
    cout<<(!(X&&Y)?'T':'F')<<"  ";
    cout<<(!X||!Y?'T':'F')<<"  ";
    cout<<endl;
    
    //Fill in the second row
    Y=false;
    cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"  ";
    cout<<(((X^Y)^Y)?'T':'F')<<"  ";
    cout<<(((X^Y)^X)?'T':'F')<<"  ";
    cout<<(!(X||Y)?'T':'F')<<"  ";
    cout<<(!X&&!Y?'T':'F')<<"  ";
    cout<<(!(X&&Y)?'T':'F')<<"  ";
    cout<<(!X||!Y?'T':'F')<<"  ";
    cout<<endl;
    //Fill in the third row
    X=false;Y=true;
   cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"  ";
    cout<<(((X^Y)^Y)?'T':'F')<<"  ";
    cout<<(((X^Y)^X)?'T':'F')<<"  ";
    cout<<(!(X||Y)?'T':'F')<<"  ";
    cout<<(!X&&!Y?'T':'F')<<"  ";
    cout<<(!(X&&Y)?'T':'F')<<"  ";
    cout<<(!X||!Y?'T':'F')<<"  ";
    cout<<endl;
    //Fill the fourth row
    X=false;Y=false;
    cout<<(X?'T':'F')<<"  ";
    cout<<(Y?'T':'F')<<"   ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"  ";
    cout<<(((X^Y)^Y)?'T':'F')<<"  ";
    cout<<(((X^Y)^X)?'T':'F')<<"  ";
    cout<<(!(X||Y)?'T':'F')<<"  ";
    cout<<(!X&&!Y?'T':'F')<<"  ";
    cout<<(!(X&&Y)?'T':'F')<<"  ";
    cout<<(!X||!Y?'T':'F')<<"  ";
    cout<<endl;       
   
//Exit stage right!
    return 0;
}

