// (Overloading Function Template) Write a C++ program illustrating overloading function
// template by taking sum of numbers (max. Three) entered through keyboard
#include <bits/stdc++.h>

using namespace std;

template <class var>
void sumThree(var a, var b, var c)
{
    cout << "\n(Inside template function)Sum of 3 numbers = " << a + b + c << "\n";
}

void sumThree(int a, int b, int c)
{
    cout << "\n(Inside overloaded explicit int type function)Sum of 3 numbers = " << a + b + c << "\n";
}

int main()
{
    sumThree(1.2,2.2,3.5);
    sumThree(1,2,3);
    return 0;
}