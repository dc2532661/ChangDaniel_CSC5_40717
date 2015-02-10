/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 9, 2015, 8:44 AM
 * Purpose: Test the Array ADT
 */

//System Library
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User Library
#include "Array.h"

//Global Constants

//Function Prototypes
Array *filAray(int);
void prntAry(const Array *, int);
void destroy(Array *);

int main(int argc, char** argv) {
//set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //fill the array ADT
    int size=100,perLine=10;
    Array *array=filAray(size);
    //Print the Array ADT
    prntAry(array,perLine);
    //clean up
    destroy(array);
    //Exit Stage
    return 0;
}

void destroy(Array *a){
    delete [] a->data;
    delete [] a->indx;
    delete a;
}

void prntAry(const Array *a, int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[a->indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }    
    cout<<endl;
}

Array *filAray(int n){
    //Make Sure valid size for the array
    if(n<=0)return 0;
    //Dynamically create the array ADT
    Array *a=new Array;
    //Fill the array ADT
    a->size=n;
    //Now declare and allocate memory for the array and data
    a->data=new int[a->size];
    a->indx=new int[(*a).size];
    //fill data with two digit numbers
    for(int i=0;i<a;i++){
        a->data[i]=rand()%90+10;
        a->indx[i]=i;
    }
    return a;
    
}