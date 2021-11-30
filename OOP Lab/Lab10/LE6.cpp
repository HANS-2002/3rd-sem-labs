// Write a program to copy the content of two files and merge them into a third file.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fs1("states.txt", ios::in);
    fstream fs2("capital.txt", ios::in);
    fstream fs3("prog6.txt", ios::out);
    cout << "\nMerging files.....\n";
    fs3 << "States\t\t\t\tCapital\n";
    while (fs1)
    {
        string s1, s2;
        fflush(stdin);
        getline(fs1, s1);
        getline(fs2, s2);
        fs3 << s1;
        for (int i = 1; i <= 20 - s1.size(); i++)
            fs3 << " ";
        fs3 << s2 << "\n";
    }
    cout << "Files merged.\n";
    fs1.close();
    fs2.close();
    fs3.close();
    return 0;
}