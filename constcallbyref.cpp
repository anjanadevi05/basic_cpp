
#include<iostream>
using namespace std;
class array
{
	public:
		void callbyval(const int a)
		{
			cout<<"\t"<<a;
		}
		void callbyref(const int *arr)
		{
			int i=0;
			while(i<5)
			{
				cout<<"\t"<<*arr;
				arr++;
				i++;
				
			}
		}
};
int main()
{
	array ar;
	const int arr[]={1,2,3,4,5};
	int i;
	std::cout<<"printing element by call by value: ";
	for(i=0;i<5;i++)
	{
		ar.callbyval(arr[i]);
	}
	cout<<"\nprinting element by call by reference: ";
	ar.callbyref(arr);
}
