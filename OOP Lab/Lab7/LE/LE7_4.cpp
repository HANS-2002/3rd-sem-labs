// Write a program to overload unary (++) operator and unary (--) operator using friend function.
#include <bits/stdc++.h>

using namespace std;

class test
{
private:
    int n;

public:
    test(int n = 0)
    {
        this->n = n;
    }
    void displaytest()
    {
        cout << "value of n is: " << n << "\n";
    }
    friend void operator--(test &t);
    friend void operator++(test &t);
};

void operator--(test &t)
{
    t.n -= 1;
}

void operator++(test &t)
{
    t.n += 1;
}

int main()
{
    test test(10);
    cout << "Before calling unary operators: \n";
    test.displaytest();
    cout << "After calling unary (--): \n";
    --test;
    test.displaytest();
    cout << "After calling unary (++): \n";
    ++test;
    test.displaytest();
    return 0;
}