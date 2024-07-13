#include<stdio.h>
in_sort(int a[],int x)
{
	int i,j,temp;
    for (i=0;i<x;i++)
    {
        temp = a[i] ;
        for (j=i-1 ; j>=0 ; j--)
        {
            if(a[j]>temp)
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1] = temp;
    }
   for(i=0;i<x;i++)
   {
   	printf("%d\t",a[i]);
   }
   printf("\n");
}
int main()
{
	int i,j,nr,nc;
	printf("enter the number of rows and coloumns:\n");
	scanf("%d%d",&nr,&nc);
	int arr[nr][nc],s[nc];
	printf("enter the elements of array:\n");
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			scanf("%d\n",&arr[i][j]);
		}
	}
	printf("original array:\n");
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			printf("%d",arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	printf("sorted array\n");
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			s[j]=arr[i][j];
		}
		in_sort(s,nc);
	}
	
}
