#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int *a=new int[size];
    cout<<"Enter "<<size<<" values:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int *p=new int(10);
    int *q=new int();
    cout<<"Value at address of p="<<*p<<endl;
    cout<<"Value of address of p="<<p<<endl;
    cout<<"Value at address of q="<<*q<<endl;
    cout<<"Value of address of q="<<q<<endl;
    cout<<"Value at address of a array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Value of address of a array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<&a[i]<<endl;
    }
}