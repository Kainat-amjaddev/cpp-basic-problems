/* 
Problem : Guessing Number Simulation
Topic   : Loops
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
 

 int number,guessNumber=7;
cout<<"Guess the number between 1 to 20 :\n";
cin>>number;

// for invalid input number
if(number<=0 || number>20){
    cout<<"Invalid input! please enter a number between 1 to 20\n";
    return 1;
}

while(number != guessNumber){
    cout<<"Wrong guess! please try again\n";
    cin>>number;
}

cout<<"congratulations ! you guessed the correct number\n";
return 0;
}
