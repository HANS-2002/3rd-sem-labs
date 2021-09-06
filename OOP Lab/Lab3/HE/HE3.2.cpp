// Create a 'DISTANCE' class with the following members:
// Data Members
// a) feet and inches
// Member Functions
// a) To input distance
// b) To output distance
// c) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances and
// output the sum.
#include<bits/stdc++.h>

using namespace std;

class Distance{
    int feet;
    int inch;
    public:
        Distance(){
            feet=0;
            inch=0;
        }
        void inputDistance(){
            cout<<"Enter distance in feet: ";
            cin>>feet;
            cout<<"Enter distance in inch: ";
            cin>>inch;
        }
        void outputDistance(){
            cout<<"Distance => "<<feet<<" feet "<<inch<<" inch\n";
        }
        void add(Distance a, Distance b){
            feet = a.feet+b.feet+(a.inch+b.inch)/12;
            inch = (a.inch+b.inch)%12;
        }
};

int main(){
    Distance d1,d2,d3;
    cout<<"Enter first distance: \n";
    d1.inputDistance();
    cout<<"Enter second distance: \n";
    d2.inputDistance();
    cout<<"First distance: \n";
    d1.outputDistance();
    cout<<"Second distance: \n";
    d2.outputDistance();
    d3.add(d1,d2);
    cout<<"The added distance: \n";
    d3.outputDistance();
    return 0;
}