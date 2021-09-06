// Define a class called Triangle, with two fields as base and height to calculate the area of a
// triangle. The class contains two methods such as getData() to initialize the fields of a triangle
// and areaTrin() to calculate the area of a triangle. Write a program to find out area of 10
// triangles.
#include<bits/stdc++.h>

using namespace std;

class Triangle{
    float base;
    float height;
    public:
        void getData(){
            cout<<"Enter height of triangle: ";
            cin>>height;
            cout<<"Enter base of triangle: ";
            cin>>base;
        }

        float areaTrin(){
            return 0.5*base*height;
        }
};

int main(){
    class Triangle t1,t2;
    cout<<"For triangle 1: \n";
    t1.getData();
    cout<<"For triangle 2: \n";
    t2.getData();
    cout<<"Area of triangle 1 = "<<t1.areaTrin()<<"\n";
    cout<<"Area of triangle 2 = "<<t2.areaTrin()<<"\n";
    return 0;
}