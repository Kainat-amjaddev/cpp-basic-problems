/*
Problem : Write a Function To Reverse a Number .
Topic   : Function
Author  : Kainat Amjad 
Time Complexity  : O(log n)
Space Complexity : O(1)

*/

#include<iostream>
using namespace std;

int reverse_ANumber (int num){

    int reverseNumber =0;
    while(num > 0){ 

    int remainder= num % 10;

    num /= 10;

    reverseNumber =reverseNumber * 10 + remainder;

}
    return reverseNumber;
}

int main(){

    int num;
    cout<<"Enter a  number : ";
    cin>>num;

    cout<<num<<" in reverse order is : "<<reverse_ANumber( num );

    return 0;
}