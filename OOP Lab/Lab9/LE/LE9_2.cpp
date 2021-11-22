// (Function Template) Write a program to define the function template for swapping the two
// items of various data types such as integers, float and characters etc
#include <bits/stdc++.h>

using namespace std;

template <class var>
void swapVar(var &a, var &b)
{
      var temp = a;
      a = b;
      b = temp;
}

int main()
{
      char c1,c2;
      int i1,i2;
      float f1,f2;
      cout<<"Enter 2 characters: ";
      cin>>c1>>c2;
      cout<<"Enter 2 integers: ";
      cin>>i1>>i2;
      cout<<"Enter 2 floats: ";
      cin>>f1>>f2;

      cout<<"\nBefore Swapping: \n";
      cout<<"c1 = "<<c1<<" , c2 = "<<c2<<"\n";
      cout<<"i1 = "<<i1<<" , i2 = "<<i2<<"\n";
      cout<<"f1 = "<<f1<<" , f2 = "<<f2<<"\n";

      swapVar(c1,c2);
      swapVar(i1,i2);
      swapVar(f1,f2);

      cout<<"\nAfter Swapping: \n";
      cout<<"c1 = "<<c1<<" , c2 = "<<c2<<"\n";
      cout<<"i1 = "<<i1<<" , i2 = "<<i2<<"\n";
      cout<<"f1 = "<<f1<<" , f2 = "<<f2<<"\n";

      return 0;
}