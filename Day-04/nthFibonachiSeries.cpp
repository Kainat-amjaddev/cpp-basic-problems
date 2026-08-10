/*

Problem : To Print Nth Fibonacci Series   
Topic   : Functions
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/




#include<iostream>
using namespace std;

// Function to print nth fibonacci series

 void printFibonacciSeries ( int n){
    

    int firstTerm, secondTerm, nextTerm ;

    firstTerm=0;
    secondTerm=1;
    
    // for Handling the case when n==1

    if(n==1){
        cout<<firstTerm;
    }else {
        cout<<firstTerm<<" "<<secondTerm;
    }
 
    for(int i=0; i<(n-2); i++){
        nextTerm=firstTerm + secondTerm;

       cout << " " << nextTerm << " ";
        
        // For Swapping Values :
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
 
}
 
 
int main(){

 int n;

cout<<"Enter the value of n : ";
cin>>n;

// For invalid input

if(n < 1){ 
    cout << "Invalid input ! please enter  Positive integer .";
    return 1;
}
 
// function call 
 
printFibonacciSeries( n );
 
return 0;

}
 