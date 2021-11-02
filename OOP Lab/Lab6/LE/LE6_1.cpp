// (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used
// to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
// of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
// such that the radius of circle class can be re-used as length in rectangle class. Take necessary
// data members and member functions for both the classes to solve this problem. All the data
// members are initialized through the constructors. Show the result by accessing the area
// method of both the classes through the objects of rectangle class.
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

int main()
{
    RECTANGLE r(2, 1);
    r.areaRectangle();
    r.areaCircle();
    return 0;
}