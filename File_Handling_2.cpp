//using member function
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ofstream outf;
    outf.open("D:\\VSCode\\Extra\\File_Handling_2.txt");
    cout<<"Enter your name: ";
    cin>>name;
    outf<<name<<endl;
    outf.close();
    ifstream inf;
    inf.open("D:\\VSCode\\Extra\\File_Handling_2.txt");
    inf>>name;
    cout<<"Name: "<<name<<endl;
    inf.close();
    return 0;
}