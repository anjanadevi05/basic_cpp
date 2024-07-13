#include<stdio.h>
void binary_search(int arr[],int size,int key)
{
	int low,high,mid;
	low=0;
	high=size-1;
	mid=((low+high)/2);
	while(low<=high)
	{
		if(arr[mid]<key)
		low=mid+1;
		else if(arr[mid]==key)
		{
		 printf("element found at position %d",mid+1);
		 break;	
		}
		else
		high=mid-1;
		mid=((low+high)/2);
	}
	if(low>high)
	puts("Element not found");
}
int main()
{
	int i,n,arr[100],key,index;
	puts("enter the number of elements in the array");
	scanf("%d",&n);
	puts("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	puts("enter the element to be found");
	scanf("%d",&key);
	binary_search(arr,n,key);
}
