#include<iostream>
using namespace std;

int main(){

    // variable allocation of heap memory

    int *ptr =new int;
    *ptr=5;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    float *ptr2=new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int *p=new int [n];

    //value

    for(int i=0;i<n;i++)
    p[i]=i+1;

    for(int i=0;i<n;i++)
    cout<<p[i]<<endl;

    delete ptr;
}