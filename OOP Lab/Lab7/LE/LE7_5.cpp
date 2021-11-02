// Write a program to design a class representing complex numbers and having functionality of
// performing addition and multiplication of two complex numbers using operator overloading.
#include <bits/stdc++.h>

using namespace std;

class COMPLEX
{
    float real, img;

public:
    COMPLEX(float real = 0, float img = 0)
    {
        this->real = real;
        this->img = img;
    }
    COMPLEX operator+(COMPLEX &c)
    {
        COMPLEX res;
        res.real = this->real + c.real;
        res.img = this->img + c.img;
        return res;
    }
    COMPLEX operator*(COMPLEX &c)
    {
        COMPLEX res;
        res.real = (this->real * c.real) - (this->img * c.img);
        res.img = (this->real * c.img) + (this->img * c.real);
        return res;
    }
    void display()
    {
        cout << "(" << real << ") + i(" << img << ")\n";
    }
};

int main()
{
    COMPLEX c1(2, 3), c2(4, 5);
    COMPLEX c3 = c1 + c2;
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c1 + c2 = ";
    c3.display();
    c3 = c1 * c2;
    cout << "c1 * c2 = ";
    c3.display();
    return 0;
}