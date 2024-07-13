#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int ch,i,flag=0;
	cout<<"enter the username";
	cin>>name;
	int n=name.length();
	if(n<8 || n>30)
	{
		cout<<"username invalid!!";
		flag=1;
	}
	if(flag==0)
	{
		ch=(int)name[0];
		if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
	   {
		for(i=0;i<n;i++)
		 {
			ch=(int)name[i];
			if((ch>=97 && ch<=122) || (ch>=65 && ch<=90) || (ch>=48 && ch<=57) ||(name[i]=='_'))
			 {
				flag=0;
			 }
			else
			{
				flag=1;
			}
		 }
		}
	   else
	   {
	   	flag=1;
	   }
	   
	}
	if(flag==1)
	cout<<"invalid";
	else
	cout<<"valid";
}
