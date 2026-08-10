/*

Problem :  Check Whether a Number is Prime
Topic   : Functions
Author  : Kainat Amjad
Time Complexity :  O(√n)
Space Complexity : O(1)
*/

// To check a number whether it is a prime or non prime .

 bool checkPrimeNumber(int n){

        bool isPrime=true;

        for(int i=2;i*i<=n;i++){

            if(n%i==0){
                isPrime=false;
                break;
            }
        }

        return isPrime ;
    }


#include<iostream>
using namespace std;
int main(){

    
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // For invalid input
    if(n<2){
        cout<<"Invalid input ! please enter a positive Integer .";
        return 1;
    }
     
    // Function call with argument passing and return value check .
  
if(checkPrimeNumber(n)){
    cout<<"Prime number .";
}
else{
    cout<<"Non-prime no .";
}

return 0;

}