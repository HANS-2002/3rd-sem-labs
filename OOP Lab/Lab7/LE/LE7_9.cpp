// Write a program to create a class player having data members as player number, name, score.
// Now enter details of player by overloading extraction operator (>>) and display all the details
// by overloading insertion operator (<<).
#include <bits/stdc++.h>

using namespace std;

class player
{
    int pno, score;
    string name;

public:
    player(int a, int b, string s)
    {
        pno = a;
        score = b;
        name = s;
    }
    friend ostream &operator<<(ostream &out, const player &p);
    friend istream &operator>>(istream &in, player &p);
};

ostream & operator << (ostream &out, const player &c)
{
    out<<"Player number: "<<c.pno<<"\n";
    out<<"Player name: "<<c.name<<"\n";
    out<<"Player score: "<<c.score<<"\n";
    return out;
}
 
istream & operator >> (istream &in,  player &c)
{
    cout<<"Player number: ";
    in>>c.pno;
    cout<<"Player name: ";
    in>>c.name;
    cout<<"Player score: ";
    in>>c.score;
    return in;
}

int main()
{
    player p(1,120,"Virat");
    cin>>p;
    cout<<"Player details: \n";
    cout<<p;
    return 0;
}