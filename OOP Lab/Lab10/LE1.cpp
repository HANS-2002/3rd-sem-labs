// Write a program that takes student data (roll number, name, gender, marks in three
// subjects (phy, chem. & math) from the keyboard and store it to a file student.txt.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int roll = 0;
    string name;
    char gender;
    float p = 0, c = 0, m = 0;
    cout << "Enter roll: ";
    cin >> roll;
    cout << "Enter name: ";
    fflush(stdin);
    getline(cin, name);
    cout << "Enter gender: ";
    cin >> gender;
    cout << "Enter mark in Physics: ";
    cin >> p;
    cout << "Enter mark in Chemistry: ";
    cin >> c;
    cout << "Enter mark in Math: ";
    cin >> m;
    fstream fs("student.txt", ios::out);
    fs << "Roll: " << roll << "\n";
    fs << "Name: " << name << "\n";
    fs << "Gender: " << gender << "\n";
    fs << "Physics -> " << p << "\n";
    fs << "Chemistry -> " << c << "\n";
    fs << "Math -> " << m << "\n";
    fs.close();
    return 0;
}