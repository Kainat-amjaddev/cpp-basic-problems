/* 

Problem : Positive Negative Zero 
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/

#include<iostream>
using namespace std;
int main(){
 
    int num;
    cout<<"Enter a number :\n";
    cin>>num;
     // Check if the number is negative
    if(num<0){
        cout<<num <<" is a negative number \n";
    }
    // Check if the number is positive
    else if(num>0){
        cout<<num <<" is a positive number \n";
    }

    // If the number is neither positive nor negative, it must be zero
    else {

        cout<<num <<" is Zero \n";
    }

    return 0;
}