// Write a program to count number of words and lines available in a file student.txt
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fs("student.txt", ios::in);
    int lines = 0, words = 0;
    cout << "\nFile Output: \n";
    while (fs)
    {
        words++;
        string s;
        fflush(stdin);
        getline(fs, s);
        cout << s << "\n";
        for (char i : s)
            if (i == ' ')
                words++;
        lines++;
    }
    cout << "Number of liness = " << lines << "\n";
    cout << "Number of words = " << words - 1 << "\n";
    fs.close();
    return 0;
}