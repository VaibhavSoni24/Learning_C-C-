#include<iostream>
using namespace std;
//error due to pass by reference
//reference variable takes only variable as argument!
void fun(int a)
{
    cout<<"The value is"<<a;
}
void fun(int & b)
{
    cout<<"Your value is"<<b;
}
int main()
{
    int n=10;
    fun(n);
}