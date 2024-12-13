#include<iostream>
using namespace std;
template <class T1, class T2>
class example
{
    public:
        T1 a;
        T2 b;
        example()
        {
            a = 0;
            b = 0;
        }
        void getData(T1 x, T2 y)
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
    example <int , float> obj1;
    obj1.showData();
    obj1.getData(2, 4.5);
    obj1.showData();
    example <float , int> obj2;
    obj2.showData();
    obj2.getData(4.5, 2);
    obj2.showData();
    return 0;
}