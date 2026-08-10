/*

Problem : Print Prime Numbers From 2 to N
Topic   : Functions
Author  : Kainat Amjad
Time Complexity : O(n√n)
Space Complexity : O(1)

*/
 
#include<iostream>
using namespace std;

// Function to print prime_numbers from 2 to n.
  
    void printPrimeNumbers(int n){

        for(int i=2;i<=n;i++){
          
             bool isPrime=true;

            for(int j=2; j*j<=i; j++){

            if( i % j ==0 ){
                isPrime=false;
                break;
            }
            }

            if( isPrime ){
            cout<<i<<" ";
        }

    }  
        
    }


//  Main Function
int main(){

    
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // For invalid input
    if(n<2){
        cout<<"Invalid input ! please enter a positive Integer .";
        return 1;
    }
     
    // Function Call

    printPrimeNumbers(n);

return 0;

}
