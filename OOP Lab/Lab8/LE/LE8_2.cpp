// Modify the program LE8.1 by creating an array of n objects using pointers. Show the details of
// n items by using pointers to object concept.
#include <bits/stdc++.h>

using namespace std;

class Item
{
    int Ino;
    float price;

public:
    Item()
    {
        Ino = 0;
        price = 0;
    }
    void Input()
    {
        cout << "Enter Item number: ";
        cin >> Ino;
        cout << "Enter price of item: ";
        cin >> price;
    }
    void display()
    {
        cout << "Item Number: " << Ino << "\n";
        cout << "Price: " << price << "\n";
    }
};

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Item *obj1 = new Item[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Taking input for object number " << i + 1 << "\n";
        (obj1 + i)->Input();
    }
    cout << "\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Output for object number " << i + 1 << "\n";
        (obj1 + i)->display();
    }
    return 0;
}