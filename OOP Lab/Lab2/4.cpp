// Write a program to find out area or volume of an shape/object by using one function name as
// FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
// argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
// the function, then it will display appropriate message.
#include<bits/stdc++.h>
#define pi 3.141

using namespace std;

float area(float r){
    return pi*r*r;
}

float area(float l,float b){
    return l*b;
}

float area(float l,float b,float h){
    return l*b*h;
}

int main(){
    cout<<"Area of circle = "<<area(2)<<"\n";
    cout<<"Area of rectangle = "<<area(1,2)<<"\n";
    cout<<"Volume of box = "<<area(1,2,3)<<"\n";
    return 0;
}