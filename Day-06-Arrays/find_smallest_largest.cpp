/*
Problem : Write a function to find smallest and largest values in  an Array
Topic   : Arrays
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity :(1)
*/

#include<iostream>
#include<climits>
using namespace std;

void minAndMix (int arr[],int size){

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int minIndex , maxIndex;

    for(int i=0 ; i<size ;i++){
         
      
        if( arr[i] < smallest ){

          smallest=arr[i];
            
        }if( arr[i] > largest ){

          largest=arr[i];
            

        }
    }

cout<<"Smallest Value : "<<smallest<<endl;
cout<<"Largest Value : "<<largest<<endl;

}

int  main(){

    int arr[] ={ 2230,987,121,9};
    int size=4;
    // function call
    minAndMix( arr , size);

return 0 ;

}  

    
     