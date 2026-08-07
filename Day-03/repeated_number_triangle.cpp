/*

Problem : Repeated Number Triangle Pattern 
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

// Outer loop: Controls the number of rows .
  
for(int i=0;i<n;i++){

         // Inner loop: Controls what is printed in each row .

    for(int j=1;j<=i+1;j++){
        cout<<(i+1)<<" ";
    }

        // Move to  next line after printing each row .

    cout<<endl;
}
  
return 0;

}