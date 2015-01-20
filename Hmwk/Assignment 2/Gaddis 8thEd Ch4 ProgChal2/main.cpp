/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on January 19, 2015, 3:27 PM
 * Purpose: Gaddis 8thEd Ch4 ProgChal2
 */

//System Library
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    char choice;
    cout<<"Enter a number between 1 to 10";
    cin>>choice;
    switch(choice)
    { case'1': cout<<"You enter 1. \n";
    break;
    case'2': cout<<"You enter 2. \n";
    break;
    case'3': cout<<"You enter 3. \n";
    break;
    case'4': cout<<"You enter 4. \n";
    break;
    case'5': cout<<"You enter 5. \n";
    break;
    case'6': cout<<"You enter 6. \n";
    break;
    case'7': cout<<"You enter 7. \n";
    break;
    case'8': cout<<"You enter 8. \n";
    break;
    case'9': cout<<"You enter 9. \n";
    break;
    case'10': cout<<"You enter 10. \n";
    break;
        default : cout<<"You did not enter a number between 1 to 10.\n";
    }
            
    return 0;
}

