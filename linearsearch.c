#include<stdio.h>
int linear_search(int arr[],int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	if(arr[i]==key)
	return i;
	return -1;
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
	index=linear_search(arr,n,key);
	if(index==-1)
	puts("element not found");
	else
	printf("element found in position %d ",(index+1));
}
