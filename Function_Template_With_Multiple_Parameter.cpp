#include<iostream>
using namespace std;
template <class T1, class T2>
void add(T1 a, T2 b)
{
    cout<<"Addition = "<<a + b<<endl;
}
template <class T1, class T2>
void subtract(T1 x, T2 y)
{
    cout<<"Addition = "<<x - y<<endl;
}
int main()
{
    add(2,4.5);
    add(3.4,6);
    subtract(2,4.5);
    subtract(4.3,6);
    return 0;
}