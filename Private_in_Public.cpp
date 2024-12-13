#include<iostream>
using namespace std;
class sample
{
    private:
        void print()
        {
            cout<<"Hello!";
        }
    public:
        void call()
        {
            print();
        }
};
int main()
{
    sample s;
    s.call();
    return 0;
}