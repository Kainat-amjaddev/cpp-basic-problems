/* 
Problem : Swapping of Two  Numbers using Third Variable
Topic   : Variables And Assignment Operator
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

int num1,num2,temp;
cout<<"Enter  Two numbers :\n";
cin>>num1>>num2;

cout<<"=====Before Swapping========\n";
cout<<"FirstNumber "<< num1<< endl;
cout<<"SecondNumber "<< num2<< endl;
    
    // Swapping using third variable
    temp=num1;
    num1=num2;
    num2=temp;

cout<<"=====After Swapping========\n";
    cout<<"FirstNumber "<< num1<< endl;
    cout<<"SecondNumber "<< num2<<  endl;

    return 0;
}