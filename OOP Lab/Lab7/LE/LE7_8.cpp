// Write a program to create a class having two integer data members, now initialize and then add
// 10 to each data member using operator function where operator function can be called when
// you write the following statement inside main function a1+5, 10+a;
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
    test operator+(int a)
    {
        test res;
        res.n = n + a;
        return res;
    }
};

int main()
{
    test obj(10);
    cout << "Before calling binary (+) : \n";
    obj.displaytest();
    test res = obj + 10;
    cout << "After calling obj + 10 : \n";
    res.displaytest();
    return 0;
}