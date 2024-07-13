#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,sum;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&r,&c);
	printf("enter array elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("original array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("row total:\n");
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
		  sum=sum+a[i][j];	
		}
		printf("row %d total= %d\n",(i+1),sum);
	}
	printf("column total:\n");
	for(i=0;i<c;i++)
	{
		sum=0;
		for(j=0;j<r;j++)
		{
		  sum=sum+a[j][i];	
		}
		printf("col %d total= %d\n",(i+1),sum);
	}
}
