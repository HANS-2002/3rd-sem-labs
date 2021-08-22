// assign and print the roll number, phone number and address of two students having names "rohn" and "John" 
// respectively by creating two objects of the class 'Student'.
#include<bits/stdc++.h>

using namespace std;

class student{
    public:
        string name;
        int roll;
        long long phone;
        string address;
        void display(){
            cout<<"Name: "<<name<<"\n";
            cout<<"Roll: "<<roll<<"\n";
            cout<<"Phone: "<<phone<<"\n";
            cout<<"Address: "<<address<<"\n";
        }
};

int main(){
    class student s1,s2;
    s1.name = "ROHN";
    s1.roll = 1;
    s1.phone = 1234567890;
    s1.address = "MUMBAI";
    s2.name = "JOHN";
    s2.roll = 2;
    s2.phone = 1023456789;
    s2.address = "DELHI";
    s1.display();
    s2.display();
    return 0;
}
