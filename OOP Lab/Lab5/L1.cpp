// Write a program to perform addition of two complex numbers using constructor. Complex
// numbers are given through user input.
#include<bits/stdc++.h>
 
using namespace std;
 
class Complex{
    public:
        float real;
        float img;
        Complex(float a=0,float b=0){
            real=a;
            img=b;
        }
        Complex(class Complex a, class Complex b){
            real=a.real+b.real;
            img=a.img+b.img;
        }
        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>img;
        }
        void out(){
            cout<<"("<<real<<") + i("<<img<<")\n";
        }
};
 
int main(){
    Complex a,b;
    cout<<"Enter complex number a:\n";
    a.input();
    cout<<"Enter complex number b:\n";
    b.input();
    cout<<"Complex number a => ";
    a.out();
    cout<<"Complex number b => ";
    b.out();
    Complex c(a,b);
    cout<<"a + b => ";
    c.out();
    return 0;
}