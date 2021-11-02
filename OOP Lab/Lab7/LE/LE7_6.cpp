// Re-write the program no.7.5 using friend function.
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
    friend COMPLEX operator+(COMPLEX &c1, COMPLEX &c2);
    friend COMPLEX operator*(COMPLEX &c1, COMPLEX &c2);
    void display()
    {
        cout << "(" << real << ") + i(" << img << ")\n";
    }
};

COMPLEX operator+(COMPLEX &c1, COMPLEX &c2)
{
    COMPLEX res;
    res.real = c1.real + c2.real;
    res.img = c1.img + c2.img;
    return res;
}

COMPLEX operator*(COMPLEX &c1, COMPLEX &c2)
{
    COMPLEX res;
    res.real = (c1.real * c2.real) - (c1.img * c2.img);
    res.img = (c1.real * c2.img) + (c1.img * c2.real);
    return res;
}

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