// Define a class to represent a bank account. Include the following members:
// Data Members
// a) Name of the depositor
// b) Account number
// c) Type of account
// d) Balance amount in the account
// Member Functions
// a) To assign initial value
// b) To deposit an amount
// c) To withdraw an amount after checking the balance
// d) To display name and balance
// Write a main program to test the program.
#include<bits/stdc++.h>

using namespace std;

class bankAcc{
    string name;
    int accNo;
    char accType;
    float balance;
    public:
        bankAcc(string s,int a,char b){
            name=s;
            accNo=a;
            accType=b;
            balance=0;
            cout<<"The following details have been enteres: \n";
            cout<<"Name => "<<name<<"\n";
            cout<<"Account number => "<<accNo<<"\n";
            cout<<"Account type => "<<accType<<"\n";
            cout<<"Balance = "<<balance<<"\n";
        }
        void deposit(float amt){
            balance+=amt;
            cout<<"Balance after deposit = "<<balance<<"\n";
        }
        void withdraw(float amt){
            if(amt>balance){
                cout<<"Balance less than amount!\n";
            }
            else{
                balance-=amt;
            }
            cout<<"Balance after withdraw = "<<balance<<"\n";
        }
        void nameAndBal(){
            cout<<"Name => "<<name<<"\n";
            cout<<"Balance => "<<balance<<"\n";
        }
};

int main(){
    bankAcc a("Rajiv",123,'S');
    a.deposit(100);
    a.withdraw(10);
    a.nameAndBal();
    return 0;
}