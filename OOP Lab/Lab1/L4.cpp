//Write a program in to check whether a number is prime or not
#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            cout<<"Its not a prime number.\n";
            return 0;
        }
    }
    cout<<"Its a prime number.\n";
    return 0;
}