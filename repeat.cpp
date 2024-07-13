#include<iostream>
#include<string>
using namespace std;
string arr[50];
int n=sizeof(arr)/sizeof(arr[0]);
void split(string s,char c,int len)
{
	int x=0,i=0;
	string temp;
	while(i<=len)
	{
		if(s[i]!=c )
		{
			temp=temp+s[i];
		}
		if(i==len)
		{
			arr[x]=temp;
			x++;
			temp="";
		}
		else if(s[i]==c)
		{
			arr[x]=temp;
			x++;
			temp="";
		}
		i++;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
}
int repeat(int index)
{
	for(int i=0;i<index;i++)
	{
		if(arr[i]==arr[index])
		{
			return 1;
		}
	}
	return 0;
}
void check()
{
	string temp[50];
	int t[50],i,j;
	for(i=0;i<n;i++)
	{
		t[i]=0;
	}
	for(i=0;i<n;i++)
	{
			if(repeat(i))
			{
				arr[i]="oops";
			}
	}
}
int main()
{
	int i,j;
	cout<<"enter a string:";
	string sentence;
	getline(cin,sentence);
	int n=sentence.length();
	split(sentence,' ',n);
	check();
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}
