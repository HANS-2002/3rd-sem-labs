// Write a program to count number of characters, tabs, newline characters available in
// a given text file.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fs("count.txt", ios::in);
    int i = 0, tabs = 0, chars = 0;
    cout << "\nFile Output: \n";
    while (fs)
    {
        string s;
        fflush(stdin);
        getline(fs, s);
        cout << s << "\n";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' && s[i + 1] == ' ' && s[i + 2] == ' ' && s[i + 2] == ' ')
                tabs++, i += 3;
            else if (isalnum(s[i]) || s[i] != ' ')
                chars++;
        }
        i++;
    }
    cout << "Number of new lines = " << i << "\n";
    cout << "Number of tab spaces = " << tabs << "\n";
    cout << "Number of characters = " << chars << "\n";
    fs.close();
    return 0;
}