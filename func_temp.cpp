#include<iostream>
using namespace std;
template<typename x>
void bubblesort(x arr[],int n)
{
	x temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
template<class v>
void display(v arr[],int size)
{
	cout<<"\nthe elements in the array are:"<<endl;
	for(int i=0;i<size;i++)
	cout<<arr[i]<<"\t";
}
int main()
{
	int arr[]={43,46,68,88,3,67};
	char arr1[]={'r','u','a','h','j'};
	float arr2[]={2.34,78.43,78.6,45.6,35.3};
	cout<<"sorting integer array:";
	bubblesort(arr,6);
	display(arr,6);
	cout<<"\nsorting character array:";
	bubblesort(arr1,5);
	display(arr1,5);
	cout<<"\nsorting float array:";
	bubblesort(arr2,5);
	display(arr2,5);
	
}
