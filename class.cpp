#include<iostream>
using namespace std;
template<class T>
class Sort()
{
	static void sort(T a[],int n)
	{
		int i=0,j;
		T key;
		for(i=0;i<n;i++)
		{
			key=T[i]; 
			j=i-1;
			for(j>=0;a[j]>key)
			{
				if(a[j]>a[j+1])
				{
					a[j+1]=a[j]
					j--;
				} 
				a[j+1]=key;
			}
		}
	} 
	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
};

int main()
{ 
    int arr={5,4,3,2,1};
	sort(arr);
}
