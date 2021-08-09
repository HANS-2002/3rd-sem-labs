// Write a program to store the author, title, price of n books & display the book details. n is the
// user input
#include<iostream>
#include<string>

using namespace std;
struct book{
    string author;
    string title;
    float price;
    
    void getBookInfo(){
        cout<<"Enter author name: ";
        fflush(stdin);
        getline(cin,author);
        cout<<"Enter title: ";
        fflush(stdin);
        getline(cin,title);
        cout<<"Enter price: ";
        cin>>price;
    }
    void displayBookInfo(){
        cout<<"Author: "<<author<<"\n";
        cout<<"Title: "<<title<<"\n";
        cout<<"Price: "<<price<<"\n";
    }
}s[100];

int main()
{
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter details of book "<<i<<":\n";
        s[i].getBookInfo();
    }
    for(int i=1;i<=n;i++){
        cout<<"Details of book "<<i<<":\n";
        s[i].displayBookInfo();
    }
    return 0;
}