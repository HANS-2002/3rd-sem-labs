// WAP to input name, roll number and marks in 3 subjects for a student, and display it.
#include<bits/stdc++.h>

using namespace std;

class student{
    string name;
    int roll;
    int marks[3];
    public:
        void input(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll: ";
            cin>>roll;
            for(int i=0;i<3;i++){
                cout<<"Enter mark in "<<i+1<<"th subject: ";
                cin>>marks[i];
            }
        }
        void display(){
            cout<<"Name: "<<name<<"\n";
            cout<<"Roll: "<<roll<<"\n";
            for(int i=0;i<3;i++)
                cout<<"Mark in "<<i+1<<"th subject = "<<marks[i]<<"\n";
        }
};  

int main(){
    class student s;
    s.input();
    s.display();
    return 0;  
}
