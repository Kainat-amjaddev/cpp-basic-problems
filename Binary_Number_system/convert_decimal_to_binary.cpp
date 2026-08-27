
/*
Problem : Convert a Decimal Number To its Binary Form .
Topic   : Binary Number System
Author  : Kainat Amjad 
Time Complexity  : O(log n)
Space Complexity : O(1)
*/

#include<iostream>
using namespace std;

int decimalToBinary (int decimalNumber){

    int ans=0, power =1; //  10^0 = 1

    while( decimalNumber>0 ){

    int remainder= decimalNumber % 2;

     decimalNumber /= 2;

        ans+= (remainder * power);  // ans = ans + (remainder * power )
        power*=10;
    }

    return ans;
}

int main(){

    int decimalNumber;
    cout<<"Enter a number : ";
    cin>>decimalNumber;

    cout<<decimalNumber<<" in binary form is : "<<decimalToBinary( decimalNumber );

    return 0;
}