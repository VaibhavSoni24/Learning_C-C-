#include<iostream>
using namespace std;
class sample
{
    public:
        int a;
        void setvalue(int a)
        {
            this->a=a;
        }
        void display1()
        {
            cout<<"Value of a="<<a<<endl;
        }
        void display2()
        {
            cout<<"Larger value is="<<a;
        }
        sample &greater(sample &s)
        {
            if(s.a>a)
            {
                return s;
            }
            else
            {
                return *this;
            }
        }
};
int main()
{
    sample s1;
    s1.setvalue(10);
    s1.display1();
    sample s2;
    s2.setvalue(20);
    s2.display1();
    sample s3;
    s3.display1();
    int p,q;
    cout<<"Enter two values to compare:";
    cin>>p>>q;
    sample s4,s5,s6;
    s4.setvalue(p);
    s5.setvalue(q);
    s6=s4.greater(s5);
    s6.display2();
    return 0;
}