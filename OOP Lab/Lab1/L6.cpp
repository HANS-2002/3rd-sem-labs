// Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. n is the user input
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)sum+=1/pow(i,i);
    cout<<"The series sum = "<<sum<<"\n";
    return 0;
}