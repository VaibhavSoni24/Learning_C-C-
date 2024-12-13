#include<iostream>
using namespace std;
class A 
{
    public:
        virtual void animal()
        {
            cout<<"Animal eats  :   class A"<<endl;
        }
        void plant()
        {
            cout<<"Plants use air   :   class A"<<endl;
        }
};
class B : public A
{
    public:
    void animal()
    {
        cout<<"Cow eats grass   :   class B"<<endl;
    }
    void plant()
    {
        cout<<"Plants use CO2   :   class B"<<endl;
    }
};
int main()
{
    A a,*aptr;
    B b;
    aptr = &b;
    a.animal();
    aptr -> animal();
    aptr -> plant();
    return 0;
}