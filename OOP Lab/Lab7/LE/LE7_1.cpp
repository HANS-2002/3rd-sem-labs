//Write a program to overload unary (-) operator.
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
    void operator-()
    {
        n = -n;
    }
};

int main()
{
    test test(10);
    cout << "Before calling unary (-): \n";
    test.displaytest();
    -test;
    cout << "After calling unary (-): \n";
    test.displaytest();
    return 0;
}