/*

Problem : To calculate the Sum_Of_Digit
Topic   : Functions
Author  : Kainat Amjad
Time Complexity : O(log n)
Space Complexity : O(1)

*/

// To calculate sum of digit

int sum_Of_Digits(int num){

    int digitSum=0;

    while( num>0 ){
      
    int lastDigit= num%10;  // To get the last digit

    num/=10;   // To remove the last digit

    digitSum += lastDigit;

    }

    return digitSum;
}

 
#include<iostream>
using namespace std;
int main(){


int num;
cout<<"Enter the value of num : ";
cin>>num;

// for invalid input :

if( num<0 ){

    cout<<"Invalid input! Please enter a valid number. .";

    return 1;
}

cout<<"Sum of Digits "<<num<<" = "<<sum_Of_Digits( num);

      
return 0;

}
