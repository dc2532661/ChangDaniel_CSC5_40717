/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 8, 2015, 10:30 AM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_ProgProj5)
 */

#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char**argv) {
//Declare variables
char c;//character
//Prompt user for a character
cout<<"This program will output a large block letter\"c\""<<endl;
cout<<"with the character you are going to input"<<endl;
cout<<"Input the character"<<endl;
cin>>c;
cout<<endl<<endl;
//Output a large letter "c" with a character user enter
cout<< "     "<<"  "<< c << c << c << c << c << endl;
cout<< "      "<< c <<"   "<< c << endl;
cout<< "      "<< c <<"                          "<< endl;
cout<< "      "<< c <<"                          "<< endl;
cout<< "      "<< c <<"                          "<< endl;
cout<< "      "<< c <<"                          "<< endl;
cout<< "      "<< c <<"                          "<< endl;
cout<< "      "<< c <<"   "<< c << endl;
cout<< "     "<<"  "<< c << c << c << c << c << endl;
//Exit stage right
return 0;
}


