// Write a program that adds two complex numbers. The objects must be passed as function
// arguments.
#include<bits/stdc++.h>
 
using namespace std;
 
class complex{
    public:
        float real;
        float img;
        void add(class complex a, class complex b){
            real=a.real+b.real;
            img=a.img+b.img;
        }

        class complex add(class complex *a, class complex *b){
            class complex c;
            c.real=(*a).real+(*b).real;
            c.img=(*a).img+(*b).img;
            return c;
        }
}a,b,c,d;


 
int main(){
    cout<<"Enter real part of 1st imaginary number: ";
    cin>>a.real;
    cout<<"Enter complex part of 1st imaginary number: ";
    cin>>a.img;
    cout<<"Enter real part of 2nd imaginary number: ";
    cin>>b.real;
    cout<<"Enter complex part of 2nd imaginary number: ";
    cin>>b.img;
    cout<<"The first complex number = ("<<a.real<<") + i("<<a.img<<")\n";
    cout<<"The second complex number = ("<<b.real<<") + i("<<b.img<<")\n";
    c.add(a,b);
    d = d.add(&a,&b);
    cout<<"Addition result without return = ("<<c.real<<") + i("<<c.img<<")\n";
    cout<<"Addition result with return = ("<<d.real<<") + i("<<d.img<<")\n";
    return 0;
}