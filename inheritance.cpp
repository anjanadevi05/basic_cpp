#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student
{
	public:
	int entryno;
	int total;
	string name;
	void display()
	{
		cout<<"entry no:"<<entryno<<"\n";
		cout<<"name:"<<name<<"\n";
		cout<<"total:"<<total<<"\n";
	}
};
class science:public student
{
	public:
		int math,phy,chem;
	void getdata()
	{
		cout<<"enter name:";
		cin>>name;
		cout<<"enter phy mark:";
		cin>>phy;
		cout<<"enter maths mark:";
		cin>>math;
		cout<<"enter chem mark:";
		cin>>chem;
		total=math+chem+phy;
	}
};
class arts:public student
{
	public:
		int his,eng,eco;
	void getdata()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enter his mark";
		cin>>his;
		cout<<"enter eng mark";
		cin>>eng;
		cout<<"enter eco mark";
		cin>>eco;
		total=his+eng+eco;
		
	}
};
int main()
{
	science s;
	arts a;
	char ch;
	do
	{
		string temp="";
		cout<<"are u science student or arts student?";
		cin>>temp;
		if(temp=="science")
		{
			s.entryno=1;
			s.getdata();
			s.display();
		}
		else
		{
			a.entryno=2;
			a.getdata();
			a.display();
		}
		cout<<"want to enter another data?";
		cin>>ch;
	}
	while(ch=='y');
}


