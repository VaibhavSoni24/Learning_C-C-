#include<iostream>
using namespace std;
class A
{
    public:
        void show()
        {
            cout<<"Class A's function 'show()' called..."<<endl;
        }
};
class B: public virtual A
{
    public:
    void display()
    {
        cout<<"Class B's function 'display()' called..."<<endl;
   }
};
class C: public virtual A //virtual or error
{
    public:
    void print()
    {
        cout<<"Class C's function 'print()' called..."<<endl;
    }
};
class D: public B, public C
{
    public:
    void result()
    {
        cout<<"Class D's function 'result()' called..."<<endl;
    }
};
int main()
{
    D d;
    d.show();
    d.display();
    d.print();
    d.result();
    return 0;
}