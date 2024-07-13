#include <stdio.h>
int main()
{
	int a1[100][100],n,i,j,a2[100][100],prod[100][100],sum,k;
	printf("enter number of rows and columns of both the array\n");
	scanf("%d",&n);
	printf("array 1:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}
		printf("array 2:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
		        sum=sum+(a1[i][k]*a2[k][j]);
		    }  
			prod[i][j]=sum;
			
		}
	}
	printf("after multiplication:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",prod[i][j]);
		}
		printf("\n");
	}
	
}
