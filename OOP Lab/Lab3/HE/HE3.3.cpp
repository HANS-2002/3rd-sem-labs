// Write a program to create a class called COMPLEX and implement the following overloading
// functions ADD that return a COMPLEX number.
// a) ADD (a , s2) - where a is an integer (real part) and s2 is a complex number.
// b) ADD (s1, s2) - where s1 and s2 are complex numbers.
#include <bits/stdc++.h>

using namespace std;

class Complex
{
    public:
    int real;
    int image;
    void input()
    {
        cout<<"enter the imaginary number you want to add: ";
        cin>>real>>image;
    }
    void add(int a,Complex b)
    {
        real=b.real+a;
        image=b.image;
        cout<<"The sum of this is"<<endl<<"the real part is: "<<real<<endl<<"the imaginary part is: "<<image<<"i"<<endl;
    }
    void add(Complex h,Complex d)
    {
        real=h.real+d.real;
        image=h.image+d.image;
         cout<<"The sum of this is"<<endl<<"the real part is: "<<real<<endl<<"the imaginary part is: "<<image<<"i"<<endl;
    }
};
int main()
{
    class Complex f,u,d;
    f.input();
    d.input();
    u.add(f, d);
    u.add(int(2), f);

    return 0;
}