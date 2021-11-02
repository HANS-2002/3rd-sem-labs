// Write a program to overload new and delete operator
#include <bits/stdc++.h>

using namespace std;

class test
{
    int n;

public:
    test(int n = 0)
    {
        this->n = n;
    }
    void display()
    {
        cout << "value of n is: " << n << "\n";
    }
    void *operator new(size_t size)
    {
        cout << "Overloaded new operator with size: " << size << endl;
        void *p = ::operator new(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout << "Delete operator overloaded\n";
        free(p);
    }
};

int main()
{
    test *p = new test(24);
    p->display();
    delete p;
}