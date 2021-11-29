// (Class Template) Write a program to define a class template for reading two data items from
// the keyboard and find out their sum.
#include <bits/stdc++.h>

using namespace std;

template <class var>
class SumClass
{
    var a, b;

public:
    SumClass(var a, var b)
    {
        this->a = a;
        this->b = b;
    }
    void input()
    {
        cout << "Enter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;
    }
    void output()
    {
        cout << "Sum of a and b = " << a + b << "\n";
    }
};

int main()
{
    SumClass<int> s(0,0);
    s.input();
    s.output();
    return 0;
}