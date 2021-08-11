// Write a program to demonstrate the concept of call-by-value, call-by-reference & call-byaddress by taking swapping of two numbers as an example.
#include<bits/stdc++.h>

using namespace std;

void callByValue(int a,int b){
    int t=a;
    a = b;
    b = t;
    cout<<"Interchanged Values in call by value: ";
    cout<<"a = "<<a<<" ";
    cout<<"b = "<<b<<"\n"; 
}

void callByReference(int &a,int &b){
    int t=a;
    a = b;
    b = t;
    cout<<"Interchanged Values in call by reference\n";
}

void callByAddress(int *a,int *b){
    int t=*a;
    *a = *b;
    *b = t;
    cout<<"Interchanged Values in call by address\n";
}


int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Numbers before interchange -> a = "<<a<<", b = "<<b<<"\n";
    callByValue(a,b);
    cout<<"Numbers in main function -> a = "<<a<<", b = "<<b<<"\n";
    callByReference(a,b);
    cout<<"Numbers in main function -> a = "<<a<<", b = "<<b<<"\n";
    callByAddress(&a,&b);
    cout<<"Numbers in main function -> a = "<<a<<", b = "<<b<<"\n";
    return 0;
}