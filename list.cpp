#include<vector>
#include<string>
#include<iostream>
using namespace std;
class book
{
	public:
	string name;
	string author;
	int price;
	int stock;
	book(string n,string a,int p,int s)
	{
		name=n;
		author=a;
		price=p;
		stock=s;
	}
	bool isavailable(int numcopies)
	{
		return numcopies<=stock;
	}
	int bill(int numcopies)
	{
		if(isavailable(numcopies))
		{
			cout<<"total price:"<<(price*numcopies);
		}
		else
		{
			cout<<"enough copies not found";
		}
	}	
};
int main()
{
	vector<book>list;
	string name,aut;
	int c;
	list.push_back(book("life of anjana","anjana",40000,100));
	list.push_back(book("ak","anj",40000,100));
	list.push_back(book("a","jana",40000,100));
	list.push_back(book("jana","j",40000,100));
	cout<<"enter the name of book and author";
	cin>>name>>aut;
	bool a=false;
	for(int i=0;i<list.size();i++)
	{
		
		book &ref=list[i];
		if(ref.name==name && ref.author==aut)
		{
			a=true;
			cout<<"book found,enter no of copies";
			cin>>c;
			ref.bill(c);
		}
	}
	if(!a)
	cout<<"book not avilable";
}
