// (Virtual Function) Define a class ABC. Derive two classes BBC and KBC from ABC. All
// the classes contains same member function name as display(). The base class pointer always
// holds the derived class objects.
// Write a program such that base class pointer or reference will always access/call the base
// version of the members available in derived class, do not have any access to the derived
// class members.
#include <bits/stdc++.h>

using namespace std;

class ABC
{
    int a;

public:
    ABC(int a = 0)
    {
        this->a = a;
    }
    void display()
    {
        cout << "value of a in base class = " << this->a << "\n";
    }
};

class KBC : public ABC
{
    int k;

public:
    KBC(int k = 0)
    {
        this->k = k;
    }
    void display()
    {
        cout << "value of k in base class KBC = " << this->k << "\n";
    }
};

class BBC : public ABC
{
    int b;

public:
    BBC(int b = 0)
    {
        this->b = b;
    }
    void display()
    {
        cout << "value of b in base class BBC = " << this->b << "\n";
    }
};

int main()
{
    ABC *obj = new ABC(2);
    obj->display();
    KBC kObj(1);
    obj = &kObj;
    obj->display();
    BBC bObj(3);
    obj = &bObj;
    obj->display();
    return 0;
}