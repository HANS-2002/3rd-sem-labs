// (Pointers to objects) Define a class Item that is used to store and display the information
// regarding the item number and its price. Write a program to store and display the details of
// one items by using both normal object and pointer to object separately. Display appropriate
// message wherever necessary.
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
    Item obj, *obj1 = new Item;
    cout<<"Taking input for normal object:\n";
    obj.Input();
    cout<<"Taking input for pointer object:\n";
    obj1->Input();
    cout<<"\n\n";
    cout<<"Output for normal object:\n";
    obj.display();
    cout<<"Output for pointer object:\n";
    obj1->display();
    return 0;
}