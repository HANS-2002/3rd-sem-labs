// Create a class TIME with members hour, minute and second. Write a program that adds two
// time objects.The objects must be passed as function arguments.
#include<bits/stdc++.h>

using namespace std;

class TIME{
    public:
        int hour;
        int min;
        int sec;

        void getData(){
            cout<<"Enter hours: ";
            cin>>hour;
            cout<<"Enter minutes: ";
            cin>>min;
            cout<<"Enter seconds: ";
            cin>>sec;
        }

        void addTime(class TIME t){
            int h = hour+t.hour+(min+t.min)/60+(sec+t.sec)/3600;
            int m = (min+t.min+(sec+t.sec)/60)%60;
            int s = (sec+t.sec)%60;
            hour = h,min = m,sec = s;
        }

        void showData(){
            cout<<hour<<" hour : "<<min<<" minute : "<<sec<<" second\n";
        }
};

int main(){
    class TIME t1,t2;
    cout<<"For time 1: \n";
    t1.getData();
    cout<<"For time 2: \n";
    t2.getData();
    t1.addTime(t2);
    cout<<"Time after addition: ";
    t1.showData();
    return 0;
}