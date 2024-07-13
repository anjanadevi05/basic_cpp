#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int partition(int arr[],int lb,int ub)
{
	int start,end,pivot,i;
	pivot=arr[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
		start++;
	    }
	    while(arr[end]>pivot)
	    {
	    	end--;
		}
		if(start<end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[lb],&arr[end]);
	return end;
}
quicksort(int arr[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
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
	quicksort(arr,0,n-1);
	puts("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

