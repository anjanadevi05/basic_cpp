#include<iostream>
using namespace std;
class bankacc
{
	int accno=1000;
	int bal;
	char name[20];
	public:
	bankacc()
	{
		int i=0;
		i=i+100;
		accno=accno+i;
	}
	void getdet()
	{
		cout<<"enter the account details";
		cin>>name>>bal;
	}
	friend void display(bankacc);
};
void display(bankacc b)
{
	cout<<"name:"<<b.name;
	cout<<"accname"<<b.accno;
	cout<<"bal"<<b.bal;
}
int main()
{
	bankacc obj;
	char w;
	do
	{
		obj.getdet();
		display(obj);
		cout<<"want to enter another data?";
		cin>>w;
	}
	while(w=='y');
}


