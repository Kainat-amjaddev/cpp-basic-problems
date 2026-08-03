/* 
Problem : Check a Character is UpperCase or LowerCase 
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"Enter a Character :\n";
    cin>>ch;
    // for invalid input
    if(!((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))){

        cout<<"Invalid input! Not an Alphabet \n";
        return 1 ;

    }

if (ch>='A' && ch<='Z'){

    cout<<ch<<" is an Uppercase Character \n";
}
else{

    cout<<ch<<" is an Lowercase Character \n";
}

    return 0;
}