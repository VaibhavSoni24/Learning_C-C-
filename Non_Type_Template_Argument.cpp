#include<iostream>
using namespace std;
template<class T, int max>
class array
{
    public:
        int i = 1;
        T arr[max];
        void insert()
        {
            for(int j = 0; j<max; j++)
            {
                arr[j]=i;
                i++;
            }
        }
        void display()
        {
            for(int j = 0; j<max; j++)
            {
                cout<<arr[j]<<endl;
            }
        }
};
int main()
{
    array <int, 10> t1;
    t1.insert();
    t1.display();
    return 0;
}