// (Multilevel Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as BOX from RECTANGLE class. Take necessary data & member
// functions for this box class to calculate the volume of the box. All the data members are
// initialized through the constructors. Show the result by accessing the area method of circle
// and rectangle and the volume method of box class through the objects of box class.
#include <bits/stdc++.h>

using namespace std;

class CIRCLE
{
protected:
    float r;

public:
    CIRCLE(float r = 0)
    {
        this->r = r;
    }
    void areaCircle()
    {
        float pi = 3.14153;
        cout << "Area of circle with r =  " << r << " is: " << pi * r * r << "\n";
    }
};

class RECTANGLE : public CIRCLE
{
protected:
    float b;

public:
    RECTANGLE(float l = 0, float b = 0) : CIRCLE(l)
    {
        this->b = b;
    }
    void areaRectangle()
    {
        cout << "Area of rectangle with l = " << r << " and b = " << b << " is: " << r * b << "\n";
    }
};

class BOX : public RECTANGLE
{
protected:
    float h;

public:
    BOX(float l = 0, float b = 0, float h = 0) : RECTANGLE(l, b)
    {
        this->h = h;
    }
    void areaBox()
    {
        cout << "Volume of box with l = " << r << ", b = " << b << " and h = " << h << " is: " << r * b * h << "\n";
    }
};

int main()
{
    BOX b(2, 1, 1);
    b.areaBox();
    b.areaRectangle();
    b.areaCircle();
    return 0;
}