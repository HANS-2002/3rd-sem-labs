// Program to create a class called STRING and implement the following operations. Display the
// results after every operation by overloading the operator <<.
// a) STRING s1= “KIIT”
// b) STRING s2= “KISS
// c) STRING s3= s1+s2; (use copy operator).
#include <bits/stdc++.h>

using namespace std;

class STRING
{
    string s;

public:
    STRING(string s = "")
    {
        this->s = s;
    }
    STRING(const STRING &obj)
    {
        this->s = obj.s;
    }
    friend ostream &operator<<(ostream &, const STRING &);
    friend STRING operator+(STRING const &, STRING const &);
};

ostream &operator<<(ostream &out, const STRING &c)
{
    out << "STRING s = " << c.s << "\n";
    return out;
}

STRING operator+(STRING const &obj1, STRING const &obj2)
{
    STRING res;
    res.s = obj1.s + obj2.s;
    return res;
}

int main()
{
    STRING s1("HELLO "), s2("WORLD!");
    cout << "For string s1: \n";
    cout << s1;
    cout << "For string s2: \n";
    cout << s2;
    STRING s3 = s1 + s2;
    cout << "For string s1 + s2: \n";
    cout << s3;
}