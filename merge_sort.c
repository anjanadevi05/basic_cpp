#include<stdio.h>
int n,s_array[100];;
void merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	i=lb;
	j=mid+1;
	k=0;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			s_array[k]=a[i];
			i++;
			k++;
		}
		else
		{
			s_array[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
		{
			s_array[k]=a[i];
			k++;
			i++;
		}
	while(j<=ub)
		{
			s_array[k]=a[j];
			k++;
			j++;
		}
}
void mergesort(int arr[],int low,int high)
{
	int mid,i;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
	else return;
}
int main()
{
	int i,arr[100],key,index;
	puts("enter the number of elements in the array");
	scanf("%d",&n);
	puts("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n);
	puts("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",s_array[i]);
	}
}
