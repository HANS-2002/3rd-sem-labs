// (Class Template) Write a class template to represent a generic vector. Include member
// functions to perform the following tasks:
//  To create the vector.
//  To modify the value of a given element.
//  To multiply the vector by a scalar value.
//  To display the vector in the form (10, 20, 30)
#include <bits/stdc++.h>

using namespace std;

template <class var>
class Vector
{
    var x, y, z;

public:
    Vector(var x = 0, var y = 0, var z = 0)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void createVector()
    {
        cout << "Enter x component of vector: ";
        cin >> x;
        cout << "Enter y component of vector: ";
        cin >> y;
        cout << "Enter z component of vector: ";
        cin >> z;
    }
    void modifyValue()
    {
        cout << "Enter new x component of vector: ";
        cin >> x;
        cout << "Enter new y component of vector: ";
        cin >> y;
        cout << "Enter new z component of vector: ";
        cin >> z;
    }
    void multiplyScalar()
    {
        int sc;
        cout << "Enter scalar to multiply: ";
        cin >> sc;
        x *= sc;
        y *= sc;
        z *= sc;
    }
    void showVector()
    {
        cout << "The vector is => (" << x << "," << y << "," << z << ")\n";
    }
};

int main()
{
    Vector<int> v;
    cout << "\nCreating vector........\n";
    v.createVector();
    v.showVector();
    cout << "\nModyfying vector........\n";
    v.modifyValue();
    v.showVector();
    cout << "\nMultiplying Scalar........\n";
    v.multiplyScalar();
    v.showVector();
    return 0;
}