//  (Function Template) Define a function template for finding the minimum value contained in
// an array. Write main() function to find the minimum value of integer array and minimum value
// of floating point numbers in an array.
#include <bits/stdc++.h>

using namespace std;

template <class var>
var findMin(var a[], int n)
{
      var minVal = INT_MAX;
      for (int i = 0; i < n; i++)
            if (a[i] < minVal)
                  minVal = a[i];
      return minVal;
}

int main()
{
      int sizea = 0, sizeb = 0;
      cout << "Enter size of int array: ";
      cin >> sizea;
      cout << "Enter size of float array: ";
      cin >> sizeb;
      int *a = new int[sizea];
      float *b = new float[sizeb];
      cout << "Enter " << sizea << " elements of int array: ";
      for (int i = 0; i < sizea; i++)
            cin >> a[i];
      cout << "Enter " << sizeb << " elements of float array: ";
      for (int i = 0; i < sizeb; i++)
            cin >> b[i];
      cout << "Minimum element of int array = " << findMin(a, sizea) << "\n";
      cout << "Minimum element of float array = " << findMin(b, sizeb) << "\n";
      return 0;
}