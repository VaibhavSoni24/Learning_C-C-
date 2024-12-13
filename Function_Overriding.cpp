#include<iostream>
using namespace std;
class sample
{
    public:
    void animal()
    {
        cout<<"Animal can eat..."<<endl;
    }
};
class example: public sample
{
    public:
    void animal() //overriding
    {
        cout<<"Cow can eat grass..."<<endl;
    }
};
int main()
{
    sample s;
    example e;
    s.animal();
    e.animal();
    return 0;
};