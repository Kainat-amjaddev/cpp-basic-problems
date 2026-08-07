/*

Problem : Right angle Triangle Pattern of Stars 
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

// Outer loop: Controls the number of rows.

for(int i=0;i<n;i++){
    
    // inner loop : Controls what is printed in each row .

    for(int j=i+1;j>0;j--){

        cout<<j;
    }

   // Move to the next line after printing one row.

     cout<<endl;
}
     
return 0;

}