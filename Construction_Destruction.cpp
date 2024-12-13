#include<iostream>
using namespace std;
class sample
{
    public:
        int a,b;
        sample();
        sample(int x,int y)
        {
            a=x;
            b=y;
        }
        sample(sample&s)
        {
            a=s.a;
            b=s.b;
        }
        ~sample()
        {
            cout<<"Destructor called..\n";
        }
        void display()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
};
sample::sample()
{
    a=5;
    b=5;
}
int main()
{
    sample s1;
    s1.display();
    sample s2(10,20);
    s2.display();
    sample s3(s2);
    s3.display();
}