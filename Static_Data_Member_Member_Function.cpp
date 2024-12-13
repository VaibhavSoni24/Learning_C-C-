#include<iostream>
using namespace std;
class sample
{
    public:
        static int count;
        sample()
        {
            count++;
        }
        static void show()
        {
            cout<<"Number of objects in class: "<<count<<endl;
        }
};
int sample :: count = 0;
int main()
{
    sample s1,s2,s3;
    sample :: show();
    sample s4;
    sample :: show();
    return 0;
}