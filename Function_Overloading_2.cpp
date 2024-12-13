#include<iostream>
using namespace std;
//here error is due to type conversion
//because compiler takes real value as double and not float
void fun(int a)
{
    cout<<"The value is"<<a;
}
void fun(float b)
{
    cout<<"The value is"<<b;
}
int main()
{
    fun(5);
    //fun(q);
    fun(5.6f);
}