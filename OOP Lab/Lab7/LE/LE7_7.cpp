// Implement a class String containing the following functions:
// - Overload + operator to carry out concatenation of strings.
// - Overload = operator to carry out string copy.
// - Overload == operator to carry out the comparison of strings.
// - Function to display the length of a string
#include <bits/stdc++.h>

using namespace std;

class String
{
    string s;

public:
    String()
    {
        this->s = "";
    }
    String(char s[])
    {
        this->s = s;
    }
    int len()
    {
        return s.size();
    }
    void display()
    {
        cout << s << "\n";
    }
    String operator+(String &s)
    {
        String str;
        str.s = this->s + s.s;
        return str;
    }
    void operator=(String &s)
    {
        this->s = s.s;
    }
    bool operator==(String &s)
    {
        return this->s == s.s;
    }
};

int main()
{
    String a("Good "), b("people");
    cout << "a = ";
    a.display();
    cout << "b = ";
    b.display();
    cout << "a + b = ";
    (a + b).display();
    cout << "Copied a to anathor object d: ";
    String d = a;
    cout << "d = ";
    d.display();
    bool isEqualda = d == a;
    bool isEqualdb = d == b;
    cout << "d == a: ";
    isEqualda ? cout << "True\n" : cout << "False\n";
    cout << "d == b: ";
    isEqualdb ? cout << "True\n" : cout << "False\n";
    cout << "Length of a = " << a.len() << "\n";
    cout << "Length of b = " << b.len() << "\n";
    cout << "Length of d = " << d.len() << "\n";
    return 0;
}