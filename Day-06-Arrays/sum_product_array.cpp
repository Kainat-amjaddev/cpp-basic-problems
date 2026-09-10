/*
Problem : Write a function to calculate sum & product of all numbers in an Array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity :O(1)
*/


#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    
    int sum=0;
    for(int i=0; i<size; i++){
       sum+=arr[i];
    }

    return sum;
}

int productOfArray(int arr[], int size){
    
    int product=1;
    for(int i=0; i<size; i++){
       product*=arr[i];
    }

    return product;
}
int main(){
  
    int arr[] ={2, 3, 4, 5, 6, 8};
    int size =6;
    
    cout<<"Sum Of all numbers in an  Array : "<<sumOfArray(arr , size)<<endl;
    cout<<"product Of all numbers in an Array : "<<productOfArray(arr , size);
    
     return 0;
}