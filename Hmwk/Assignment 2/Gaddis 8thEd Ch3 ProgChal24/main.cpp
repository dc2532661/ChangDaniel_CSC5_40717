/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 2:27 PM
 * Purpose: Gaddis 8thEd Ch3 ProgChal24
 */

//System Library
#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
//Declare variables
    string Name="Mike";//his name
    float Age=20;//his age
    string City="Riverside";//
    string Coll="UCB";//his college
    string Pro="teacher";//his profession
    string AniN="John";// name of animal
    string Ani="Dog";//his pet
//Start write
cout<<"There once was a person named "<<Name<<" who lived in city "<<City<<".";
cout<<"At the age of "<<Age<<", "<<Name<<" went to college at "<<Coll;
cout<<"  "<<Name<<" graduated and went to work as a "<<Pro<<"."<<" Then, "<<Name<<"adopted";
cout<<"a(n) "<<Ani<<" named "<<AniN<<"."<<"They both lived happily ever after !"<<endl;
    return 0;
}

