#include<iostream>
using namespace std;
void divide(int &p, int &q)
{
    if(q != 0)
        {
            cout<<"Division: "<<(p/q)<<endl;
        }
        else
        {
            throw((q));
        }
}
int main()
{
    int a,b,c;
    cout<<"Enter two values to divide: ";
    cin>>a>>b;
    try
    {
        divide(a,b);
    }
    catch(int x)
    {
        cout<<"Error is due to: "<<b<<endl;
    }
    return 0;
}