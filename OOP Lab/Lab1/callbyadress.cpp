#include<iostream>

using namespace std;

void callByAdresss(int &a,int &b){
    int t;   
    t=a;  
    a=b;  
    b=t;
}

int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Before swap: a = "<<a<<" b = "<<b<<"\n";
    callByAdresss(a,b);
    cout<<"After swap: a = "<<a<<" b = "<<b<<"\n";
    return 0;
}