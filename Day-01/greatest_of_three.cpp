/* 
Problem : Greatest of Three Numbers 
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
  
    float num1,num2,num3;
    cout<<"Enter Three Numbers :\n";
    cin>>num1>>num2>>num3;

    // for equal numbers 

    if(num1==num2 && num2==num3){
        cout<<"All numbers are Equal " <<num1 <<" " <<num2 <<" " <<num3 <<" " ;
        return 0;
    }
    if(num1>=num2 && num1>=num3){
        cout<<"The greatest number is :" <<num1;
    }
    else  if(num2>=num1 && num2>=num3){
       cout<<"The greatest number is :" <<num2;
    }
else{
        cout<<"The greatest number is :" <<num3;
    }
    return 0;
}

    
