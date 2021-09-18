// Create two classes DM and DB which store the value of distances. DM stores distances in
// meters and centimeters and DB in feet and inches. Write a program that can read values for
// the class objects and add one object of Dm with another object of DB. Use friend function to
// carry out the operation. The object that stores the results may be a DM object or DB object,
// depending on the units in which the results are required. The display should in the format of
// feet and inches or meters and centimeters depending on the object on display.
#include <bits/stdc++.h>
 
using namespace std;
 
class DB{
    int feet;
    int inch;
    public:
        DB(int a=0,int b=0){
            feet=a;
            inch=b;
        }
        void input(){
            cout<<"Enter distance in feet: ";
            cin>>feet;
            cout<<"Enter distance in inch: ";
            cin>>inch;
        }
        friend class DM;
        void printMember(){
            cout<<"Distance in feet and inch => "<<feet<<" feet and "<<inch<<" inch\n";
        }
};
 
class DM{
    int km;
    int meter;
    public:
        DM(int a=0,int b=0){
            km=a;
            meter=b;
        }
        void input(){
            cout<<"Enter distance in km: ";
            cin>>km;
            cout<<"Enter distance in m: ";
            cin>>meter;
        }
        void add(DB &a){
            float cm1 = (((a.feet*12)+a.inch)*2.54);
            float cm2 = (((km*1000)+meter)*100);
            float cm = cm1+cm2;
            int feet = int((cm/2.54)/12);
            float inch = (cm/2.54) - (12*feet);
            int km = int((cm/100)/1000);
            float meter = (cm/100) - 1000*km;
            cout<<"Total distance in feet and inch => "<<feet<<" feet and "<<inch<<" inch\n";
            cout<<"Total distance in km and meter => "<<km<<" km and "<<meter<<" meter\n";
        }
        void printMember(){
            cout<<"Distance in km and meter => "<<km<<" km and "<<meter<<" meter\n";
        }
};
 
int main(){
    DB a;
    DM b;
    a.input();
    b.input();
    a.printMember();
    b.printMember();
    cout<<"The distance after adding: \n";
    b.add(a);
    return 0;
 }