/*
Problem : Write a function to find the target value in the array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity :(1)
*/


#include<iostream>
using namespace std;

int linearSearch(int arr[] , int size , int target){

     for(int i=0; i<size; i++){

          if (arr[i] == target){
                cout<<"Target Value is Found at Index : ";
               return i;  // found Target value and return its position.
          }
     }

     return -1; // Not found target Value.

}
int main(){

    int arr[] = {2,3,5,7,8};

    int size = 5 , target = 8;

    cout<<linearSearch(arr , size , target);
     return 0;
}