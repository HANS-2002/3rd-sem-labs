//Write a program to find out all roots of a quadratic equation
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter a,b,c of quadratic equation: ";
    cin>>a>>b>>c;
    float D = (b*b) - (4*a*c);
    if(D==0){
        float root = (-b)/(2*a);
        cout<<"2 equal roots = "<<root<<" exists\n";
    }
    else if(D>0){
        float root1 = (-b+sqrt(D))/(2*a);
        float root2 = (-b-sqrt(D))/(2*a);
        cout<<"2 distinct roots = "<<root1<<" and "<<root2<<" exists\n";
    }
    else{
        float p1 = (-b)/(2*a);
        float p2 = sqrt(-D)/(2*a);
        cout<<"2 imaginary roots = "<<p1<<" + "<<p2<<"i"<<" and "<<p1<<" - "<<p2<<"i"<<" exists\n";
    }
    return 0;
}