// Write a program to find out the area of an rectangle through friend function and member
// function separately of Rectangle class.
#include<bits/stdc++.h>

using namespace std;

class Rectagle{
    public:
    int l,b;
        Rectagle(int x,int y){
            l=x;
            b=y;
        }
        void friend findArea(Rectagle r){
            cout<<"Area in friend function = "<<r.l*r.b<<"\n";
        }
        void findArea(){
            cout<<"Area in member function = "<<l*b<<"\n";
        }
};

int main(){
    Rectagle r1(1,2);
    findArea(r1);
    r1.findArea();
    return 0;
}