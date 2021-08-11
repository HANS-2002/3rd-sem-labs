// Write a program to find the summation of three numbers by using one function only with
// function name SUM having three arguments. If at run time one argumnet is given to the
// function SUM, then second and third argument will be assumed by default as 10 and 20
// respectively. If two argumnets are given at run time, then thrird argument will be assumed as 20.
// Use function with default argument concepts.
#include<bits/stdc++.h>

using namespace std;

int summation(int a,int b=10,int c=20);

int main(){
    int a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;
    cout<<"Summation with all values of a,b,c = "<<summation(a,b,c)<<"\n";
    cout<<"Summation with only values of a and b = "<<summation(a,b)<<"\n";
    cout<<"Summation with only value of a = "<<summation(a)<<"\n";
    return 0;
}

int summation(int a,int b,int c){
    return a+b+c;
}