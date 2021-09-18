// Write a program to perform addition of two complex numbers using constructor overloading.
// The first constructor which takes no argument is used to create objects which are not
// initialized, second which takes one argument is used to initialize real and imaginary parts to
// equal values and third which takes two argument is used to initialize real and imaginary to
// two different values.
#include<bits/stdc++.h>

using namespace std;

class COMPLEX{
    public:
    float real,img;
        COMPLEX(){
            real=img=0;
        }
        COMPLEX(float a){
            real=img=a;
        }
        COMPLEX(float a,float b){
            real=a;
            img=b;
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
        friend COMPLEX add(COMPLEX c1,COMPLEX c2){
            COMPLEX c;
            c.real = c1.real+c2.real;
            c.img = c1.img+c2.img;
            return c;
        }
};

int main(){
    int x,y,z;
    cout<<"Enter complex number a with one equal value for real and imaginary:\n";
    cin>>x;
    COMPLEX a(x);
    cout<<"Enter complex number b with distinct value for real and imaginary:\n";
    cin>>y>>z;
    COMPLEX b(y,z);
    cout<<"Complex number a => ";
    a.out();
    cout<<"Complex number b => ";
    b.out();
    COMPLEX c = add(a,b);
    cout<<"a + b => ";
    c.out();
    return 0;
}
