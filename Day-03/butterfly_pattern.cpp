/*
Problem : Print  Butterfly Pattern
Topic   : Nested For Loop 
Author  : Kainat Amjad
Time Complexity :  O(n^2)
Space Complexity : O(1)
*/

#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // Outer Loop : Controls the number of rows.

    // Print the Top part of Butterfly_pattern

    for(int i=0;i<n;i++){

    // Inner Loop : Controls what is printed in each row.
    
     // Left wing stars
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    
    // For First spaces

    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }

    // For second spaces

    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    // Right wing stars

     for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
             
    } 

    // Print the bottom part of butterfly_pattern.

    
    for(int i=0;i<n;i++){

    // Inner Loop : Controls what is printing in each row.
 
    // Left wing stars
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    
    // For First inner spaces

    for(int j=0;j<i;j++){
        cout<<" ";
    }

    // For second inner spaces

    for(int j=0;j<i;j++){
        cout<<" ";
    }

    // Right wing stars
     for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
             
    } 


    return 0;
}