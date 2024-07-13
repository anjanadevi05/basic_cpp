//array row and col total using pointers
#include<stdio.h>
int main()
{
	int i,a[100][100],sum,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int (*q)[3];
	int *ptr;
	for(q=&a;q<=a+1;q++)
	{
		sum=0;
		for(ptr=q;q<ptr+1;q++)
		{
			sum= *ptr+sum;
		}
		printf("%d",sum);
	}
}
