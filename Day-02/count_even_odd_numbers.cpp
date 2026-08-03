/* 
Problem : Count Even Odd Numbers
Topic   : Loops
Author  : Kainat Amjad
Time Complexity : O(n)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

int n; 
int evenCount=0,oddCount=0;
cout<<"Enter a number :\n";
cin>>n;

// for invalid input 
if(n<=0){
        cout<<" Invalid input! please enter a positive number";
        return 1;
    }

for(int i=1;i<=n;i++){
    if(i%2==0){

     evenCount++;  
    }
    else{

        oddCount++;
    }
}

cout<<"Even numbers : "<<evenCount<<endl;
cout<<"odd numbers  : "<<oddCount<<endl;

return 0;
}

