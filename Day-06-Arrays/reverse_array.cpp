/*
Problem : Write a function to Reverse an Array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity :O(1)
*/


#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

     // Two pointers Approach

     int start= 0  , end = size-1;

     while( start < end ){

          swap(arr[start], arr[end]);
          start++;  // start = start + 1
          end--;  // end = end - 1
     }
     
  
}

int main(){
 int arr[ ] = {2,9,7,6,5,4,8};
 int size=7;
//    function call
 reverseArray(arr , size);

//  print the reverse ayrray
 for(int i=0; i<size; i++){
     cout<<arr[i]<<" ";
 }
    
     return 0;
}