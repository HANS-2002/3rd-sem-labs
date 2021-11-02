// (this Pointer) Write a program to display the contains of an object, when local variable’s
// name is same as member’s name by using this pointer.
#include <bits/stdc++.h>

using namespace std;

class Base
{
    int a;

public:
    Base(int a = 0)
    {
        this->a = a;
    }
    void baseDisplay()
    {
        int a = 5;
        cout << "value of local variable a = " << a << "\n";
        cout << "value of a in base class = " << this->a << "\n";
    }
};

int main()
{
    Base obj(2);
    obj.baseDisplay();
    return 0;
}