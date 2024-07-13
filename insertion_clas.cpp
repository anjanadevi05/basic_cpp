#include<iostream>
using namespace std;
template<class t>
class array
{
   public:
   t *arr;
   int n;
   array(t a[],int size)
   {
   	    n=size;
   	    int i;
   	    arr=new t[n];
   	    for(i=0;i<size;i++)
   	    arr[i]=a[i];
	}
	void insertion_sort()
	{
		for(int i=1;i<n;i++)
		{
			t key=arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>key)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
		}
	}
	void display()
    {
	    cout<<"\nthe elements in the array are:"<<endl;
	    for(int i=0;i<n;i++)
	    cout<<arr[i]<<"\t";
    }	
};
int main()
{
	int arr[]={43,46,68,88,3,67};
	array<int>in(arr,6);
	in.insertion_sort();
	in.display();
	char arr1[]={'r','u','a','h','j'};
	array<char>ch(arr1,5);
	ch.insertion_sort();
	ch.display();
	float arr2[] = {79, 45.6, 35.3, 2.3, 34.7};
	array<float>fl(arr2,5);
	fl.insertion_sort();
	fl.display();
}
