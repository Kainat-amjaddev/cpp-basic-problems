/*

Problem : Print Hollow Right triangle Pattern 
Topic   : Nested For Loop
Author  : Kainat Amjad
Time Complexity : O(n^2)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // Outer Loop : Controls the number of rows.
    for(int i=0;i<n;i++){
    // Inner Loop :Controls what is printed in each row. 
        for(int j=0;j<i+1;j++){
                // Condition where stars is printed.
            if(i==0 || i==n-1 || j==0 || j==i ){
                cout<<"*";
            }else{
                // print spaces inside hollow triangle
                cout <<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}