// (Non-type as function parameters) Write a program to demonstrate the concept behind
// function templates with non-type as function parameters by taking sorting an array of numbers
// as an examples.
#include <bits/stdc++.h>

using namespace std;

template <class var>
void bubbleSort(var a[], int size)
{
      for (int i = 0; i < size - 1; i++)
            for (int j = 0; j < size - i - 1; j++)
                  if (a[j] > a[j + 1])
                        swap(a[j], a[j + 1]);
}

int main()
{
      const int sizea = 5;
      int *a = new int[sizea];

      cout << "Enter " << sizea << " elements of int array: ";
      for (int i = 0; i < sizea; i++)
            cin >> a[i];

      cout << "\nThe unsorted array is: ";
      for (int i = 0; i < sizea; i++)
            cout << a[i] << " ";

      bubbleSort(a, sizea);

      cout << "\nThe sorted array is: ";
      for (int i = 0; i < sizea; i++)
            cout << a[i] << " ";
      cout << "\n";
      return 0;
}