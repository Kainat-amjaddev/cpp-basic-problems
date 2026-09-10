/*
Problem : Write a function to print unique values in  an Array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n^2)
Space Complexity :(1)
*/


#include<iostream>
using namespace std;

void uniqueValues(int arr[] , int size){
     for(int i=0 ; i<size; i++){

          bool dublicateValue = false;

      for(int j=0; j<size; j++){

           if( i!=j && arr[i]==arr[j] ){

                dublicateValue = true;
                         break;
                    
               }
          }
          if(dublicateValue == false){
                 cout<<arr[i]<<" ";
          }
          }
     }
int main(){

    int arr[]= {1,2,3,1,2,3,4,8};
    int size=8;
//  function call
    cout<<"Unique values in an Array : ";
    uniqueValues(arr , size);
    return 0;
}