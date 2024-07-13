#include<stdio.h>
int n;
int main()
{
	int i,arr[100],key,index,j,dif;
	puts("enter the number of elements in the array");
	scanf("%d",&n);
	puts("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	puts("enter the difference between the pair:");
	scanf("%d",&dif);
	int temp,count=0;
	puts("The pairs are:");
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		for(j=0;j<n;j++)
		{
		     if((temp-arr[j]==dif))
		     {
		     	count++;
		     	printf("\n(%d,%d)\n",temp,arr[j]);
			 }
		}
	}
	if(count==0)
	puts("no such pairs found");
}
