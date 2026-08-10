/*

Problem : Print Hollow Diamond Pattern 
Topic   : Nested For Loop
Author  : Kainat Amjad
Time Complexity : O(n^2)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"Enter the value of n: ";
    cin>>n;

   // Print the top half of the diamond 

    // Outer Loop  controls the number of rows.
    for(int i=0; i<n; i++){

    // Inner Loop controls what is printed in each row.

    // Print leading spaces
        for(int j=0; j<n-i-1; j++){

            cout<<" ";
                 
            }
            cout<<"*";

            if(i!=0){

             // Print spaces between stars

            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
            }
            cout<<endl;   
        }

        // Print the bottom half of the diamond
        // Outer Loop : Controls the number of rows.
        for(int i=n-2; i>=0; i--){

            // outer spaces

            // Inner Loop :Controls what is printed in each row.
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        
         if(i!=0){ 
            // for Inner spaces:
        for(int j=2*i-1; j>0; j--){
           cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;

            }
     
     return 0;
}

   
   