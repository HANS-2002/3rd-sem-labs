// Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two
// complex numbers. Write a main function to add two COMPLEX objects.
#include<bits/stdc++.h>

using namespace std;

class COMPLEX{
    public:
    float real,img;
        COMPLEX(){
            real=img=0;
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
    COMPLEX a,b;
    cout<<"Enter complex number a:\n";
    a.input();
    cout<<"Enter complex number b:\n";
    b.input();
    cout<<"Complex number a => ";
    a.out();
    cout<<"Complex number b => ";
    b.out();
    COMPLEX c = add(a,b);
    cout<<"a + b => ";
    c.out();
    return 0;
}
