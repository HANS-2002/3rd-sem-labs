// Create 
// a) 'DISTANCE' class with the following members:
// Data Members
// b) feet and inches
// Member Functions
// d) To input distance through constructor
// e) To output distance
// f) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances (one through
// implicit call and other explicit call and output the sum.
#include <bits/stdc++.h>
 
using namespace std;
 
class DISTANCE{
    int feet;
    int inch;
    public:
        DISTANCE(){
            cout<<"Enter distance in feet: ";
            cin>>feet;
            cout<<"Enter distance in inch: ";
            cin>>inch;
        }
        DISTANCE(int a){
            feet=inch=a;
        }
        void out(){
            cout<<feet<<" feet and "<<inch<<" inch\n";
        }
        friend DISTANCE add(DISTANCE a, DISTANCE b){
            DISTANCE c(0);
            c.feet = a.feet + b.feet + int((a.inch+b.inch)/12);
            c.inch = (a.inch + b.inch)%12;
            return c;
        }
        
};
 
int main(){
    DISTANCE c(0);
    cout<<"Enter distance a: \n";
    DISTANCE a;
    cout<<"Enter distance b: \n";
    DISTANCE b;
    cout<<"Distance a: ";
    a.out();
    cout<<"Distance b: ";
    b.out();
    c = add(a,b);
    cout<<"a + b => ";
    c.out();
    return 0;
 }