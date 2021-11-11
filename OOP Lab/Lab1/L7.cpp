//Write a program to find the smallest and largest elements in a given array of n integers.
#include<iostream>

using namespace std;

int main(){
    int a[100],size=0,smallest,largest;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++)cin>>a[i];
    smallest=largest=a[0];
    for(int i=1;i<size;i++){
        if(largest<a[i])largest=a[i];
        if(smallest>a[i])smallest=a[i];
    }
    cout<<"Smallest element = "<<smallest<<"\n";
    cout<<"Largest element = "<<largest<<"\n";
    return 0;
}