// Write a program that opens two files in sequence for writing the data. Then it opens two
// files in sequence for reading the data and display the data in computer screen. File1
// contains state names of india and File2 contains the capital of different states of India
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fs1("states.txt", ios::in);
    fstream fs2("capital.txt", ios::in);
    cout << "\nStates\t\t    Capital\n";
    while (fs1)
    {
        string s1, s2;
        fflush(stdin);
        getline(fs1, s1);
        getline(fs2, s2);
        cout << s1;
        for (int i = 1; i <= 20 - s1.size(); i++)
            cout << " ";
        cout << s2 << "\n";
    }
    fs1.close();
    fs2.close();
    return 0;
}