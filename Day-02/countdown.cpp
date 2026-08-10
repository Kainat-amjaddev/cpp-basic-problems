/* 
Problem : CountDown of a Input Number
Topic   : Loops
Author  : Kainat Amjad
Time Complexity : O()
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
 int num;

cout<<"Enter a number :\n";
cin>>num;

cout << "Countdown from " << num << " to 0:\n";

// Print the countdown from the input number to 0
for(int i=num;i>=0;i--){

    cout<<i << " ";

}
    return 0;
}
 