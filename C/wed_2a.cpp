#include<stdio.h>
void palin(int x[],int c)
{
	int i,temp[c],j,flag;
	for(i=c-1,j=0;i>=0,j<c;i--,j++)
	{
		temp[j]=x[i];
	}
	for(i=0;i<c;i++)
	{
		if(temp[i]==x[i])
		flag=0;
		else
		flag=1;
	}
	if(flag==1)
	printf("not palindrome");
	else
	printf("palindrome");
}
void b_sort(int x[],int c)
{
	int i,j,temp;
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-1-i;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	for(i=0;i<c;i++)
	{
		printf("%d\t",x[i]);
	}
}
int main()
{
 int arr[100][100],i,j,n,m,s[100];
 printf("enter the number of rows and column");
 scanf("%d%d",&n,&m);
 if((n<1 || m<1)  && (n>m))
 {
 	printf("invalid input");
 }
 else
 {
 	printf("enter the elements in the array");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			scanf("%d",&arr[i][j]);
		 }
	 }
	 printf("\nthe original array:\n");
	 for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			printf("%d\t",arr[i][j]);
		 }
		 printf("\n");
	 }
	 printf("upper triangular matrix:\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		if(i>j)
	 		printf("\t");
	 		else
	 		printf("%d\t",arr[i][j]);
		 }
		 printf("\n");
	 }
	 //to check palindrome
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<m;j++)
	 	{
	 		s[j]=arr[i][j];
	 	}
	 	printf("row %d",(i+1));
	 	palin(s,m);
	 }
	 printf("\nthe sorted array:\n");
	 for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		{
 			s[j]=arr[i][j];
 		
		 }
		 b_sort(s,m);
		 printf("\n");
	 }
	 
 }
}
