/* 
Problem : Multiplication Table 
Topic   : Loops
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

int number;
cout<<"Enter a number :\n";
cin>>number;

// Print the multiplication table of the input number

cout << "Multiplication Table of " << number << ":\n";

for(int i=1;i<=10;i++){

    cout<<number<<" * "<< i <<" = "<<number*i <<"\n";
}

return 0;
}
    
     
    