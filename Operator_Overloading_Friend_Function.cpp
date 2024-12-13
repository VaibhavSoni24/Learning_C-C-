#include<iostream>
using namespace std;
class sample
{
    public:
        int a;
        sample()
        {
            a = 0;
        }
        void getData(int x)
        {
            a = x;
        }
        void showData()
        {
            cout<<"Value : "<<a<<endl;
        }
        void operator = (sample s)
        {
            a = s.a;
        }
        //void friend operator = (sample &i, sample j);     Assignment operator function must be a member function...
};
int main()
{
    sample s1,s2;
    s1.getData(3);
    s1.showData();
    s2.showData();
    s2 = s1;
    s2.showData();
    return 0;
}