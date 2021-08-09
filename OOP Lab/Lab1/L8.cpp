// Write a program to find out the prime factors of a number entered through keyboard by using a
// user define function for this.
#include<iostream>

using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return false;
    return true; 
}

int main(){
    int a;
    cout<<"Enter a nummber: ";
    cin>>a;
    if(isPrime(a))cout<<a<<" is prime.\n";
    else{
        cout<<"The prime factors are....\n";
        for(int i=2;i<a;i++)
            if(isPrime(i)&&(a%i==0))cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}