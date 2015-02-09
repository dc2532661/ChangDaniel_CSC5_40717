/* 
 * File:   main.cpp
 * Author: Daniel Chang
 * Created on February 8, 2015, 3:19 PM
 * Purpose:Gaddis 8thEd Ch8 ProgChal 9
 */
//System Library
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int bubbleSort(int [], int);
void showBubble(int [], int);
void selectionSort(int [], int);
void showSelection(int [], int);

//Execution Begins Here!



int main()
{
    //Array of 20 unsorted values
    int bubble[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int selection[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int results;
    
    //Display Bubble Array    
    cout << "Bubble Sort" << endl;
    cout << "Original Unsorted Array:" << endl;
    showBubble(bubble, 20);
    cout << endl;
    
    //Call Bubble Sort Algorithm
    bubbleSort(bubble, 20);
    
    //Display Bubble Sorted Array
    cout << "Sorted Array:" << endl; 
    showBubble(bubble, 20);
    
    //Display Selection Array
    cout << "***Selection Sort***" << endl;
    cout << "Original Unsorted Array:" << endl;
    showSelection(selection, 20);
    cout << endl;
    
    //Call Select Sort Algorithm
    selectionSort(selection, 20);
    
    //Display Selection Sorted Array
    cout << "Sorted Array" << endl;
    showSelection(selection, 20);
    cout << endl;
   
    return 0;
}

int bubbleSort(int array[], int size)
{
     bool swap;
     int num;
     
     do
     {
         swap = false;
         for(int count = 0; count < (size - 1); count++)
         {
             if (array[count] > array [count + 1])
             {
                              num = array[count];
                              array[count] = array[count + 1];
                              array[count + 1] = num;
                              swap = true;
                              count++;
                                                           
             }
             return count++;
         }
     } while (swap);  
}

void showBubble(int array[], int size)
{
     for(int count = 0; count < size; count++)
     cout << array[count] << " ";
     cout << endl;
}

void selectionSort(int array[], int size)
{
     int startScan, minIndex, minValue;
     
     for (startScan = 0; startScan < (size - 1); startScan++)
     {
         minIndex = startScan;
         minValue = array[startScan];
         for(int index = startScan + 1; index < size; index++)
         {
                 if(array[index] < minValue)
                 {
                                 minValue = array[index];
                                 minIndex = index;
                 }
         }
         array[minIndex] = array[startScan];
         array[startScan] = minValue;
     }
}

void showSelection(int array[], int size)
{
     for (int count = 0; count < size; count++)
     cout << array[count] << " ";
     cout << endl;
}