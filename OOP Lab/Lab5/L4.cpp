// Create a class called 'TIME' that has three integer data members for hours, minutes and
// seconds, a constructor to initialize the object to some constant value, member function to
// add two TIME objects, member function to display time in HH:MM:SS format. Write a main
// function to create two TIME objects, add them and display the result in HH:MM:SS format.
#include<bits/stdc++.h>

using namespace std;

class TIME{
    public:
    int hour,minute,second;
        TIME(int a){
            hour=minute=second=a;
        }
        TIME(){
            cout<<"Enter hours: ";
            cin>>hour;
            cout<<"Enter minutes: ";
            cin>>minute;
            cout<<"Enter seconds: ";
            cin>>second;
        }
        void displayTime(){
            (hour>=0&&hour<=9)?cout<<"0"<<hour<<":":cout<<hour<<":";
            (minute>=0&&minute<=9)?cout<<"0"<<minute<<":":cout<<minute<<":";
            (second>=0&&second<=9)?cout<<"0"<<second<<"\n":cout<<second<<"\n";
        }
        friend TIME add(TIME c1,TIME c2){
            TIME c(0);
            c.hour = c1.hour + c2.hour + (((c1.second+c2.second)/60)+c1.minute+c2.minute)/60;
            c.minute = (((c1.second+c2.second)/60)+c1.minute+c2.minute)%60;
            c.second = ((c1.second+c2.second)%60);
            return c;
        }
};

int main(){
    cout<<"Enter TIME a:\n";
    TIME a;
    cout<<"Enter TIME b:\n";
    TIME b;
    cout<<"TIME a => ";
    a.displayTime();
    cout<<"TIME b => ";
    b.displayTime();
    TIME c(int(0));
    c = add(a,b);
    cout<<"a + b => ";
    c.displayTime();
    return 0;
}