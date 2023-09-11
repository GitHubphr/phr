#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("sample.txt",ios::out);
    if(!file)
    {
        cout<<"error to open file";
        return 0;
    }
    cout<<"file created is succesfull";
    file<<"EEE";
    file.close();
     file.open("sample.txt",ios::in);
    if(!file)
    {
        cout<<"error to open file";
        return 0;
    }
    char ch;
    cout<<"file content:";
    while(file.eof())
    {
        file>>ch;
        cout<<ch;
        file.close();
        return 0;
    }
}
