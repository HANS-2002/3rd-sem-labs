// Write a program to find out the area of one rectangle and one square by using a suitable friend
// function named as area() for it.
#include<bits/stdc++.h>

using namespace std;

class Shape{
    public:
    int l,b,a;
        Shape(int x,int y,int z){
            l=x;
            b=y;
            a=z;
        }
        void friend findArea(Shape r){
            cout<<"Area of sqaure in friend function = "<<r.a*r.a<<"\n";
            cout<<"Area of rectangle in friend function = "<<r.l*r.b<<"\n";
        }
};

int main(){
    Shape s(1,2,3);
    findArea(s);
    return 0;
}