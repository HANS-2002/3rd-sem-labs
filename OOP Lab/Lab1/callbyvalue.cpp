#include<iostream>

using namespace std;

void callByValue(int a,int b){   
    int t=a;  
    a=b;  
    b=t;  
    printf("After swap a = %d, b = %d\n",a,b);
}

int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Before swap: a = "<<a<<" b = "<<b<<"\n";
    callByValue(a,b);
    return 0;
}