#include<iostream>
#include<string>
using namespace std;
class rbi
{
public:
string name;
void get()
{
cout<<"\n enter the name of the bank:";
cin>>name;
}
void show()
{
cout<<name;
}
};
class sbi: public rbi
{ public:

void show()
{
sbi s;
s.get();
cout<<s.name;
}

};
class iob:public rbi{

public:

void show()
{
iob i;
i.get();
cout<<i.name;
}
};
class boi:public iob{

public:

void show()
{
boi b;
b.get();
cout<<b.name;
}
};
int main()
{
boi bo;
bo.show();
}
