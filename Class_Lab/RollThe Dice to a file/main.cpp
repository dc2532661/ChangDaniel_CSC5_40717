/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 12, 2015, 10:07 AM
 * Purpose:Illustrate file i/o and random number
 */

//user libraries
#include <cstdlib>//random rand(), srand()
#include<iostream>//keyboard/Monitor I/O
#include<fstream>//File I/O
#include<ctime>//Time to functions
using namespace std;

//user libraries

//Global Constants

//Function Prototypes
 
//Execution begins here !

int main(int argc, char** argv) {
//set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("RollTheDice.dat");
    //Declare 5 dice
    unsigned short die1, die2, die3, die4, die5;
    //Set the value for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //output the results
    cout<<"Yahtzz first roll => ";
    cout<<die1<<"  "<<die2<<"  "<<die3;
    cout<<"  "<<die4<<"  "<<die5<<endl;
    //output the results to the file
    output<<"Yahtzz first roll =>";
    output<<die1<<"  "<<die2<<"  "<<die3;
    output<<"  "<<die4<<"  "<<die5<<endl;
    //Close the stream
    output.close();
    return 0;
}

