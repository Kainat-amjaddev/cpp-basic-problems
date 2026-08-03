/* 
Problem : Check a Character is Vowel Or Consonant 
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

if ( (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U') || (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') ){

    cout<<ch<<" is an Vowel character \n";
}
else{

    cout<<ch<<" is an consonant Character \n";
}

    return 0;
}