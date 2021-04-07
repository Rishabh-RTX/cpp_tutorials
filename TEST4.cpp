/*THERE ARE TWO TYPES OF HEADER FILES:
1. SYSTEM HEADER FILES EX. iostream
2. USER DEFINES HEADER FILES (IT IS CREATED BY THE PROGRRAMMER) 
   EX. OWNHEADER.cpp*/
#include<iostream>

using namespace std;

int main(){
    int a=6, b=9;
    cout<<endl;
    cout<<"TYPES OF OPERATORS IN C++:"<<endl;
    
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;                           //Arithemetic operators
    cout<<"the value of a + + is "<<a++<<endl;
    cout<<"the value of a - - is "<<a--<<endl;
    cout<<"the value of + + a is "<<++a<<endl;
    cout<<"the value of - - a is "<<--a<<endl;
    cout<<endl;

    // int a=6, b=9;                             Assighment operators--> used to assighn values to variables
    // char d='d';

    cout<<"The value of a = = b is "<<(a==b)<<endl;
    cout<<"The value of a ! = b is "<<(a!=b)<<endl;
    cout<<"the value of a > = b is "<<(a>=b)<<endl;                       //Comparison operators
    cout<<"The value of a < = b is "<<(a<=b)<<endl;
    cout<<"The value of a  >  b is "<<(a>b)<<endl;
    cout<<"The value of a  <  b is "<<(a<b)<<endl;
    cout<<endl;

    cout<<"The value of this logical and operator [(a==b) && (a<b)] is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator [(a==b) || (a<b)] is:"<<((a==b) || (a<b))<<endl;        //Logical operators
    cout<<"The value of this logical not operator [!(a==b) is:"<<(!(a==b))<<endl;
    return 0;
    
}


