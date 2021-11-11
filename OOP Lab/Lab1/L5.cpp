//Write a program to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>

using namespace std;

int main(){
    int a,b,gcd=0;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0)gcd=i;
    }
    cout<<"GCD = "<<gcd<<"\n";
    return 0;
}