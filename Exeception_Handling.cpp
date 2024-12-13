#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two values to divide: ";
    cin>>a>>b;
    try
    {
        if(b != 0)
        {
            cout<<"Division: "<<(a/b)<<endl;
        }
        else
        {
            throw(b);
        }
        
    }
    catch(int x)
    {
        cout<<"Error is due to: "<<b<<endl;
    }
    return 0;
}