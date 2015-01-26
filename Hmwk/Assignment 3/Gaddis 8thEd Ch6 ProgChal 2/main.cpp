/* 
 * File:   main.cpp
 * Author: Daniel
 * Created on January 25, 2015, 6:49 PM
 * Purpose: Gaddis 8thEd Ch6 Program 3
 */
//System Library
#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float getsales (float &);
void findhighest (float, float, float, float);
//Executions begin here !



int main(int argc, char *argv[])
{
    float northeast = 0;
    float southeast = 0;
    float northwest = 0;
    float southwest = 0;
    
    cout << "Enter NorthEast sales: $" ;
    cout << getsales(northeast) << endl;
    cout << "Enter SouthEast sales: $"; 
    cout << getsales(southeast) << endl;
    cout << "Enter NorthWest sales: $";
    cout << getsales(northwest) << endl;
    cout << "Enter SouthWest sales: $";
    cout << getsales(southwest) << endl;
    
    findhighest(northeast, southeast, northwest, southwest);
    
    return EXIT_SUCCESS;
}

float getsales (float & num)
{
    do
    {
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
        
        cin >> num;
        cout << "Number entered: ";
        
        
    }while(!cin || num <= 0);
    return num;
}

void findhighest (float ne, float se, float nw, float sw) 
{
    float high = ne;
    if(se > high)
        high = se;
    if(nw > high)
        high = nw;
    if(sw > high)
        high = sw;
        
    cout << "the highest number is: " << high << endl;
}

