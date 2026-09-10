/*
Problem : Write a function to swap smallest and largest value in  an Array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity :O(1)
*/

#include<iostream>
#include<climits>
using namespace std;

void maxAndMin (int arr[],int size){

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int minIndex , maxIndex;

    for(int i=0 ; i<size ;i++){
         
      
        if(arr[i]<smallest){

            smallest=arr[i];
            minIndex=i;  // Store the Position of smallest number

        }if(arr[i]>largest){

            largest=arr[i];
            maxIndex=i;  // Store the Position of largest number

        }
    }

    // swap the position of smallest and largest numbers
    swap(arr[minIndex],arr[maxIndex]);

}

int  main(){

    int arr[] ={ 2230,987,121,9};
    int size=4;

    maxAndMin( arr , size);

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    
    
return 0 ;

}  