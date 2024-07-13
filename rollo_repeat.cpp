#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp,i,j,arr1[10],c=0,x=0,repeat[10];
	cout<<"enter the roll no.";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		int flag=1;
		temp=arr[i];
		for(j=0;j<10;j++)
		{
			if(temp==arr1[j])
			{
				for(int k=0;k<10;k++)
				{
					if(temp==repeat[k])
					{
						flag=0;
						goto print;
					}
					
				}
				repeat[x]=temp;
				cout<<"."<<temp;
				flag=0;
				break;
			}
		}
		print:
		if(flag==1)
		{
			arr1[c]=temp;
			c++;
			x++;
		}
	}
	
}
