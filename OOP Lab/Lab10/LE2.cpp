// Write a program to open the file student.txt and display the students information on the
// computer screen along with the total marks scored by the student.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream fs("student.txt", ios::in);
    while (fs)
    {
        string s;
        fflush(stdin);
        getline(fs, s);
        cout << s << "\n";
    }
    fs.close();
    return 0;
}