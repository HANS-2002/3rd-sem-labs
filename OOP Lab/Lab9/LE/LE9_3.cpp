// (Function Template) Write a template function to search for a given key element from an
// array. Illustrate how you perform search in integer, character as well as double arrays using the
// same template function.
#include <bits/stdc++.h>

using namespace std;

template <class var>
int findElement(var a[], int n, var ele)
{
      for (int i = 0; i < n; i++)
            if (a[i] == ele)
                  return i;
      return -1;
}

int main()
{
      int sizea = 0, sizeb = 0, sizec = 0;

      cout << "Enter size of char array: ";
      cin >> sizec;
      cout << "Enter size of int array: ";
      cin >> sizea;
      cout << "Enter size of float array: ";
      cin >> sizeb;

      int *a = new int[sizea];
      float *b = new float[sizeb];
      char *c = new char[sizec];

      cout << "Enter " << sizec << " elements of char array: ";
      for (int i = 0; i < sizec; i++)
            cin >> c[i];
      cout << "Enter " << sizea << " elements of int array: ";
      for (int i = 0; i < sizea; i++)
            cin >> a[i];
      cout << "Enter " << sizeb << " elements of float array: ";
      for (int i = 0; i < sizeb; i++)
            cin >> b[i];

      char csearch;
      int isearch;
      float fsearch;
      cout << "Enter character to search in char array: ";
      cin >> csearch;
      findElement(c, sizec, csearch) == -1 ? cout << csearch << " not found in array!\n" : cout << csearch << " found in array at index = " << findElement(c, sizec, csearch) << "\n";
      cout << "Enter integer to search in integer array: ";
      cin >> isearch;
      findElement(a, sizea, isearch) == -1 ? cout << isearch << " not found in array!\n" : cout << isearch << " found in array at index = " << findElement(a, sizea, isearch) << "\n";
      cout << "Enter float to search in float array: ";
      cin >> fsearch;
      findElement(b, sizeb, fsearch) == -1 ? cout << fsearch << " not found in array!\n" : cout << fsearch << " found in array at index = " << findElement(b, sizeb, fsearch) << "\n";
      return 0;
}