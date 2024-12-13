#include<iostream>
using namespace std;
template <class T1, class T2>
class example
{
    public:
        T1 a;
        T2 b;
        example(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void showData()
        {
            cout<<"Values are : "<<a<<" and "<<b<<endl;
        }
};
int main()
{
    example <int, float> obj(5, 1.6);
    obj.showData();
    return 0;
}