// Define a class named as FRACTION that contains two data members that represent the
// numerator and denominator of a fraction. By defining necessary member functions, write a
// program to add, subtract and multiply two fractions. The add accepts the objects using call-
// by- value technique, subtract using call-by-reference and multiply using call-by-address
// technique.
#include<bits/stdc++.h>
 
using namespace std;
 
class fraction{
    public:
        float numo;
        float deno;
        void add(class fraction a, class fraction b){
            numo = a.numo*b.deno + a.deno*b.numo;
            deno = a.deno*b.deno;
        }
        void subtract(class fraction &a,class fraction &b){
            numo = a.numo*b.deno - a.deno*b.numo;
            deno = a.deno*b.deno;
        }
        void multiply(class fraction *a,class fraction *b){
            numo = (*a).numo*(*b).numo;
            deno = (*a).deno*(*b).deno;
            
        }
}a,b,c;
 
int main(){
    cout<<"Enter numerator of 1st fraction: ";
    cin>>a.numo;
    cout<<"Enter denominator of 1st fraction: ";
    cin>>a.deno;
    cout<<"Enter numerator of 2nd fraction: ";
    cin>>b.numo;
    cout<<"Enter denominator of 2nd fraction: ";
    cin>>b.deno;
    cout<<"The first fraction = ("<<a.numo<<")/("<<a.deno<<")\n";
    cout<<"The second fraction = ("<<b.numo<<")/("<<b.deno<<")\n";
    c.add(a,b);
    cout<<"Addition result = ("<<c.numo<<")/("<<c.deno<<")\n";
    c.subtract(a,b);
    cout<<"Subtraction result = ("<<c.numo<<")/("<<c.deno<<")\n";
    c.multiply(&a,&b);
    cout<<"Multiplication result = ("<<c.numo<<")/("<<c.deno<<")\n";
    return 0;
}