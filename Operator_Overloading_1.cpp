//Operator overloading unary (-) using friend function
#include<iostream>
using namespace std;
class sample
{
    public:
        int x;
        void getData(int a)
        {
            x = a;
        }
        void showData()
        {
            cout<<x<<endl;
        }
        friend void operator - (sample &s);  // pass by reference
};
void operator - (sample &s) 
{
    s.x = -s.x;
}
int main() 
{
    sample s1;
    s1.getData(10);
    s1.showData();
    -s1;
    s1.showData();      // expected output = -10
    return 0;
}