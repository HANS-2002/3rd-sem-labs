// (Pointers to derived classes) Write a program to illustrate how pointers to a base class is used
// for both base and derived class.
#include <bits/stdc++.h>

using namespace std;

class Base
{
    int a;

public:
    Base() { a = 0; }
    void baseInput()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void baseDisplay()
    {
        cout << "a in base class = " << a << "\n";
    }
};

class Derived : public Base
{
    int b;

public:
    Derived() { b = 0; }
    void derivedInput()
    {
        cout << "Enter b: ";
        cin >> b;
    }
    void derivedDisplay()
    {
        cout << "b in derived class = " << b << "\n";
    }
};

int main()
{
    Derived *obj = new Derived;
    cout<<"Working on base class using derived class object.....\n";
    obj->baseInput();
    obj->baseDisplay();
    cout<<"Working on derived class using derived class object.....\n";
    obj->derivedInput();
    obj->derivedDisplay();
    return 0;
}