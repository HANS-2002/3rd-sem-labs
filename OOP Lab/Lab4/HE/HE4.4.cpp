// Write a program to exchange values between two classes by using friend function.
#include<bits/stdc++.h>

using namespace std;

class Class1{
    public:
    int num;
        Class1(int a){
            num=a;
        }
};

class Class2{
    public:
    int num;
        Class2(int a){
            num=a;
        }
        void friend exchange(Class1 &a,Class2 &b){
            int t = a.num;
            a.num = b.num;
            b.num = t;
        }
};

int main(){
    Class1 c1(1);
    Class2 c2(2);
    cout<<"Before exchange => c1.num = "<<c1.num<<" , c2.num = "<<c2.num<<"\n";
    exchange(c1,c2);
    cout<<"After exchange => c1.num = "<<c1.num<<" , c2.num = "<<c2.num<<"\n";
    return 0;
}