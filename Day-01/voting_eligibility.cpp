/* 
Problem : Voting Eligibility 
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

    int age;
     cout<<"Enter Your Age :\n";
     cin>>age;

    //  for invalid Input

    if(age<=0){
        cout<<"Invalid input !please Enter valid age .";
        return 1;
    }

    //  for Checking eligibility based on Age 

    if(age>=18){
        cout<<"You Are Eligible to Vote\n";
    }
    else{
        cout<<"Sorry! You Are Not Eligible to Vote\n";
    }
    return 0;
}