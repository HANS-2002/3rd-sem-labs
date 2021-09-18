// Write a program using copy constructor to copy data of an object to another object.
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        int x;
        A(int a)
        {
            x = a;
        }
        A(A &i)
        {
            x = i.x;
        }
};

int main()
{
    A a1(20);
    cout<<"Value in a1 = "<<a1.x<<"\n";
    A a2 = a1;
    cout<<"Value copied in a2 = "<<a2.x<<"\n";
    return 0;
}