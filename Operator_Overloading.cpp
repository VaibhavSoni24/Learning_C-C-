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
        friend void operator - (sample &s);
        void operator + (sample s)
        {
            x = x + s.x;
        }
};
void operator - (sample &s) 
{
    s.x = -s.x;
}
int main()
{
    sample s1,s2;
    s1.getData(10);
    s2.getData(20);
    s1.showData();
    s2.showData();
    s1 + s2;
    cout<<"s1 + s2 = ";
    s1.showData();
    -s1;
    cout<<"-(s1 + s2) = ";
    s1.showData();
    return 0;
}