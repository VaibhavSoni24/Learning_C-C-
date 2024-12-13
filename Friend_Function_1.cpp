#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int a;
    public:
        void setvalue(int p)
        {
            a=p;
        }
        friend void max(ABC,XYZ);
};
class XYZ{
    int x;
    public:
        void setavlue(int q)
        {
            x=q;
        }
        friend void max(ABC,XYZ);
};
void max(ABC ab,XYZ xy)
{
    if(ab.a>xy.x)
    {
        cout<<ab.a<<"is greater";
    }
    else if(ab.a==xy.x)
    {
        cout<<ab.a<<"and"<<xy.x<<"are same";
    }
    else if(xy.x>ab.a)
    {
        cout<<xy.x<<"is greater";
    }
}
int main()
{
    int p,q;
    ABC obj1;
    cout<<"Enter first vlaue";
    cin>>p;
    obj1.setvalue(p);
    XYZ obj2;
    cout<<"Enter second vlaue";
    cin>>q;
    obj2.setavlue(q);
    max(obj1,obj2);
    return 0;
}