// (Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
// functions for this class to calculate the volume of the cylinder. Show the result by accessing
// the area method of circle and rectangle through object of rectangle class and the area of circle
// and volume method of cylinder class through the objects of cylinder class.
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

class CYLINDER : public CIRCLE
{
protected:
    float h;

public:
    CYLINDER(float l = 0, float h = 0) : CIRCLE(l)
    {
        this->h = h;
    }
    void areaCylinder()
    {
        float pi = 3.14153;
        cout << "Volume of cylinder with r = " << r << " and h = " << h << " is: " << pi * r * r * h << "\n";
    }
};

int main()
{
    RECTANGLE r(2, 1);
    CYLINDER c(1, 3);
    cout << "\nUsing object of class RECTANGLE:\n";
    r.areaRectangle();
    r.areaCircle();
    cout << "\nUsing object of class CYLINDER:\n";
    c.areaCylinder();
    c.areaCircle();
    return 0;
}