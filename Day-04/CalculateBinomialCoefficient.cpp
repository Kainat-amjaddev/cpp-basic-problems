/*

Problem : Calculate Binomial Coefficient
Topic   : Functions
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
  
    int  calculate_Factorial(int n){

        int fact=1;

        for(int i=1; i<=n; i++){
            fact *= i;
        }

        return fact;
        
    }

    int Calculate_ncr(int n, int r){

        int n_factorial = calculate_Factorial(n);
        int r_factorial = calculate_Factorial(r);
        int nMr_factorial = calculate_Factorial(n-r);

        return n_factorial/(r_factorial*nMr_factorial);

    }



int main(){

    
    int n,r;
    cout<<"Enter the value of n And r to Calculate binomial coefficient: ";
    cin>>n>>r;
    
    // For invalid input :
     if(n<0 || r<0 || r>n){
        cout<<"Invalid input! please enter non-negative integers .";
        return 1;
    }


    // Function call
    cout<<Calculate_ncr(n,r);

    
     
return 0;

}