/*

Problem : To Calculate Factorial of input Number
Topic   : Functions
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


 // To calculate the factorial of n :-

int calculateFactorial(int n){

    int fact=1;

    for(int i=1; i<=n; i++){
      
     fact*=i;    // fact = fact * i

    }

    return fact;
}
 
#include<iostream>
using namespace std;
int main(){


int n;
cout<<"Enter the value of n : ";
cin>>n;

// For invalid input

if(n < 0){ 
    cout << "Invalid input! Please enter a non-negative integer. .";
    return 1;
}
 
// function call and print Factorial
cout<<"Factorial of "<<n<<"! = "<<calculateFactorial(n);
 
return 0;

}
 