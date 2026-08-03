/* 
Problem : Employee Bonus Eligibility
Topic   : If-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

    int salary ,experienceYears;
    string name;

        //  input data from Employees

    cout<<"Enter employee name :\n";
    cin>>name;
    cout<<"Enter employee salary :\n";
    cin>>salary;
    cout<<"Enter employee years of experience :\n";
    cin>>experienceYears;

    // compare salary and experience to check eligibility for bonus

     // for invalid input
 if(salary<=0 || experienceYears<=0){
    cout<<"invalid input\n";
    return 0;
}
    if(salary<=50000 && experienceYears>=2){

        cout<<"=========EMPLOYEE PROFILE=========\n";
        cout<<"Name :"<<name<<"\n";
        cout<<"Salary :"<<salary<<"\n";
        cout<<"Experience :"<<experienceYears<<"\n";
        cout<<"Status :"<<"Bonus Approved\n";

    }
else {
        cout<<"=========EMPLOYEE PROFILE=========\n";
        cout<<"Name :"<<name<<"\n";
        cout<<"Salary :"<<salary<<"\n";
        cout<<"Experience :"<<experienceYears<<"\n";
        cout<<"satus :"<<"Bonus not Approved\n";
}

    return 0;
}  

