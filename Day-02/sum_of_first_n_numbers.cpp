/* 
Problem : Sum Of First "N" Numbers 
Topic   :Loops
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
    
    int num,sum=0;
    cout<<"Enter a number :\n";
    cin>>num;
 
   // Calculate the sum of the first N natural numbers

   if (num <= 0) {
    cout << "Invalid input! Please enter a positive number.\n";
    return 1;
}

for(int i=1;i<=num;i++){

    sum+=i;
}

cout<<"sum of numbers from 1 to "<<num <<" = " <<sum;
 
    return 0;
}