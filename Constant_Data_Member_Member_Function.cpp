#include<iostream>
using namespace std;
class sample
{
    public:
        const int num;
        sample(int q):num(q){}
        void show() const
        {
            cout<<"Constant data member: "<<num<<endl;
        }
};
int main()
{
    sample s1(3);
    //s1.a = 2;         error because its constantS
    s1.show();
    return 0;
}