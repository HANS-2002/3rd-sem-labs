// Write a program to find out the greatest between two numbers defined in two different classes
// by using friend function.
#include<bits/stdc++.h>

using namespace std;

class Number{
    public:
    int num;
        Number(int a){
            num=a;
        }
        int friend findGreater(Number a,Number b){
            return a.num>b.num?a.num:b.num;
        }
};

int main(){
    Number n1(5),n2(3);
    cout<<"\nThe greater number is => "<<findGreater(n1,n2)<<"\n";
    return 0;
}