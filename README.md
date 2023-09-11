#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file;
file.open("msg.bin",ios::binary);
if(!file)
{
cout<<"error";
}
int h,m,s;
char c=':';
cin>>h;
cin>>m;
cin>>s;
file.write((char*)&h,sizeof(h));
file.write((char*)&c,sizeof(c));
file.write((char*)&m,sizeof(m));
file.write((char*)&c,sizeof(c));
file.write((char*)&s,sizeof(s));
file.close();
ifstream file1;
file1.open("msg.bin",ios::binary);
if(!file)
{
cout<<"error";
return 0;
}
int h1,m1,s1;
char c1,c2;
file1.read((char*)&h1,sizeof (h1));
file1.read((char*)&c1,sizeof (c1));
file1.read((char*)&m1,sizeof (m1));
file1.read((char*)&c2,sizeof (c2));
file1.read((char*)&s1,sizeof (s1));
file1.close();
cout<<"time read\n";
cout<<h1<<c1<<m1<<c2<<s1;
return 0;
}
