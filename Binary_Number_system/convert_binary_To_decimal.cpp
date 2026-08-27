/*
Problem : Convert a Binary Number To its decimal Form .
Topic   : Binary Number System
Author  : Kainat Amjad 
Time Complexity  : O(log n)
Space Complexity : O(1)

*/

#include<iostream>
using namespace std;

int binaryToDecimal (int binaryNumber){

    int ans=0, power =1; //  10^0 = 1

    while( binaryNumber>0 ){

    int remainder= binaryNumber % 10;

    binaryNumber /= 10;

        ans+= (remainder * power);  // ans = ans + (remainder * power )
        power*=2;
    }

    return ans;
}

int main(){

    int binaryNumber;
    cout<<"Enter a binary  number : ";
    cin>>binaryNumber;

    cout<<binaryNumber<<" in decimal form is : "<<binaryToDecimal( binaryNumber );

    return 0;
}