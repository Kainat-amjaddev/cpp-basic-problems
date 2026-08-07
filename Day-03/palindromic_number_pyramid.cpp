/*
Problem : Print  Palindromic Number Pyramid Pattern
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

    for(int i=0;i<n;i++){

        // Inner Loop : Controls what is printed in each row.
         
        // Print  spaces :-
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

       // Print increasing numbers.

        for(int j=1;j<=i+1;j++){
            cout<<j;
        }

        // Print decreasing numbers.

        for(int j=i;j>0;j--){
            cout<<j;
        }
     
        // Move to next line after printing each row.
    
        cout<<endl;
    }

    return 0;
}
