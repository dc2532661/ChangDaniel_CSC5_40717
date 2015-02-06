/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 4, 2015, 10:59 AM
 */
//System Library
#include <iostream>
#include <ctime>
using namespace std;
//User Library

//Global Constants
const int COL=30;
//Function Prototypes
void filAray(char [][COL],int ,char );
void prntAry(char [][COL],int );
void inject(char [][COL],int ,int ,char );
//Execution begin here!
int main(int argc, char** argv) {
    const int ROW=25;
    char array[ROW][COL];
    //Fill the array
    filAray(array,ROW,'*');
    prntAry(array,ROW);
    
    inject(array,4,13,'X');
     prntAry(array,ROW);
    return 0;
}

void inject(char a[][COL],int pRow,int pCol,char c){
    a[pRow+0][pCol+1]=c;
    a[pRow+1][pCol+2]=c;
    a[pRow+2][pCol+0]=c;
    a[pRow+2][pCol+1]=c;
    a[pRow+2][pCol+2]=c;
}

void prntAry(char a[][COL],int ROW){
    cout<<endl;
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }
    cout<<endl;
}

void filAray(char a[][COL],int ROW,char c){
    for(int r=0;r<ROW;r++){
        a[r][c]=c;
    }
}

