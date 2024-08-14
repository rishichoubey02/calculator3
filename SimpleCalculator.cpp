// Create a simple calculator : 

#include<iostream>
using namespace std;

int main(){

float a,b;
char op;

cout<<"Enter first number  : ";
cin>>a;
cout<<"Enter operator :";
cin>>op;
cout<<" Enter second number : ";
cin>>b;
 
 switch (op)
 {
 case('+'):
    cout<<"Result is : " <<a+b;
    break;
 case('-'):
    cout<<"Result is : "<<a-b;
    break;
 case('*'):
    cout<<"Result is : " <<a*b;
    break;
 case('/'):
    cout<<"Result is : " <<a/b;
    break;
 } 
 return 0;
}