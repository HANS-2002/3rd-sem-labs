// Write a program to find out the area of a circle and volume of a sphere by using function
// overloading concept. (Use one function name as AREA-VOL)
#include<bits/stdc++.h>
#define pi 3.141

using namespace std;

float area_vol(float r){
    return pi*r*r;
}

double area_vol(double r){
    return (4*pi*r*r*r)/3;
}

int main(){
    float c = 2;
    double s = 2;
    cout<<"Area of circle = "<<area_vol(c)<<"\n";
    cout<<"Volume of sphere = "<<area_vol(s)<<"\n";
    return 0;
}