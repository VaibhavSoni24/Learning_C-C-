#include<iostream>
using namespace std;
//here two functions are of same name, so function overloading
//function with default argument
void fun(int a)
{
    cout<<a<<"is the number";
}
void fun(int b, int x=5)
{
    cout<<"The numbers are"<<b<<"and"<<x;
}
int main()
{
    int n;
    cout<<"Enter a value";
    cin>>n;
    fun(n);
}