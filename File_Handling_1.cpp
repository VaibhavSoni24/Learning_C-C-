//using constructor
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ofstream outf("D:\\VSCode\\Extra\\File_Handling_1.txt");
    cout<<"Enter your name: ";
    cin>>name;
    outf<<name<<endl;
    outf.close();
    ifstream inf("D:\\VSCode\\Extra\\File_Handling_1.txt");
    inf>>name;
    cout<<"Name: "<<name<<endl;
    inf.close();
    return 0;
}