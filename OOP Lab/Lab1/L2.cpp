//Write a program to check if two given non-negative integers have the same last digit.
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    if(a%10 == b%10)cout<<a<<" and "<<b<<" have same last digit.\n";
    else cout<<a<<" and "<<b<<" do not have same last digit.\n";
    return 0;
}