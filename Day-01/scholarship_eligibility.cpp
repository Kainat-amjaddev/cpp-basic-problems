/* 
Problem : Scholarship Eligibility
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
    
    //  input marks and attendance from user

    int marks ,attendance;
    cout<<"Enter Student marks :\n";
    cin>>marks;
    cout<<"Enter Student attendance :\n";
    cin>>attendance;


    // for invalid input

    if(marks<0 || marks>100 || attendance<0 || attendance>100){
        cout<<"invalid input ! please enter valid marks and attendance\n";
        return 1;
    }

    else if(marks>= 80  && attendance>=75 ){
        cout<<"congragulation ! you are eligible for scholarship\n";
    }

    else{
        cout<<"Sorry you are not eligible for scholarship\n";
    }

    return 0;
}