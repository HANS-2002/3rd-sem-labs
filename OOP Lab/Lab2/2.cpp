// Write a program to demonstrate the use of scope resolution operator(::) by declaring same
// varibale name globally and locally and display the value of gloabl and local variables.
#include<bits/stdc++.h>

using namespace std;

int a=5;//Global varibale stores 5

int main(){
    int a=1;//Local variable stores 1
    cout<<"Local variable stores a value of "<<a<<"\n";
    cout<<"Global variable stores a value of "<<::a<<"\n";
    return 0;
}