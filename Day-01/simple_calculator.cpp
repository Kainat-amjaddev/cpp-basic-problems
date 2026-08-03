/* 
Problem : Simple Calculator 
Topic   : Arithmetic Operators And if-Else
Author  : Kainat Amjad
Time Complexity : O(1)
Space Complexity : O(1)

*/


#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    char op ;

    cout<<"Enter two numbers :\n";
    cin>>num1>>num2;
    cout<<"Enter an Operator (+,-,/,%,*) :\n";
    cin>>op;

    if(op=='+'){

        cout<<"Addition : "<<num1 <<" + " <<num2 <<" = " <<num1+num2 << endl;
    }
    else  if(op=='*'){

        cout<<"Multiplication : "<<num1 <<" * " <<num2 <<" = " <<num1*num2 << endl;
    }
    else  if(op=='/'){

         // for invalid 0 input
        if(num2==0){
        cout<<"Invalid input! Division by zero is not Allowed ";
        }

        else{
        cout<<"Division : "<<num1 <<" / " <<num2 <<" = " <<num1/num2 << endl;
         }

    }
    else  if(op=='-'){

        cout<<"Subtraction : "<<num1 <<" - " <<num2 <<" = " <<num1-num2 << endl;
    }
    else  if(op=='%'){

        // for invalid 0 input
         if(num2==0){
        cout<<"Invalid input! Modulus by zero is not Allowed ";
        }

        else{
          cout<<"Modulus : "<<num1 <<" % " <<num2 <<" = " <<num1%num2 << endl;
         }

    }
    else{
        cout<<"Invalid operator ! please enter  (+,-,/,*,%) \n";
    }

    return 0;
}