/* 
Problem : Hospital Registration 
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){


   int age,weight;
string patientName;

// input data from patient   

    cout<<"Enter patient name :\n";
    cin>>patientName;
    cout<<"Enter patient age :\n";
    cin>>age;
    cout<<"Enter patient weight :\n";
    cin>>weight;
 
//    for invalid input
if(age<=0 || weight<=0){
    cout<<"invalid input !please enter a valid Age and Weight\n";
    return 1;
}

// compare the age to check category of patient

else if(age>=18){
    cout<<"========= PATIENT PROFILE ==========\n";
    cout<<"Name :     "<<patientName <<"\n";
    cout<<"Age :      "<<age <<"\n";
    cout<<"Weight :   "<<weight <<"Kg\n";
    cout<<"Category : "<<"Adult patient\n";
    cout<<"=================================";
}
else{
    cout<<"========= PATIENT PROFILE ==========\n";
    cout<<"Name :     "<<patientName <<"\n";
    cout<<"Age :      "<<age <<"\n";
    cout<<"Weight :   "<<weight   <<"Kg\n";
    cout<<"Category : "<<"Minor patient\n";
     cout<<"=================================";

}
    return 0;
}


 