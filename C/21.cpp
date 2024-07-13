#include<stdio.h>
int main()
{
	int n,i,j,num=1,arr[100][100],mid;
	printf("enter the value of N:\t");
	scanf("%d",&n);
	mid=n/2;
	if(n%2!=0)
	{
		for(i=0;i<=mid;i++)
	{
		for(j=0;j<=i;j++)
		{
		 arr[i][j]=num;
		 num++;
		}
	}
	while(i<n)
	{
		for(j=0;j<mid;j++)
		{
			arr[i][j]=num;
			num++;
		}
		mid--;
		i++;
	}
	
  }
if(n%2==0)
  {
  	for(i=0;i<mid;i++)
  	{
  		for(j=0;j<=i;j++)
  		{
  			arr[i][j]=num;
  			num++;
		  }
	  }
	  while(i<n)
	{
		for(j=0;j<mid;j++)
		{
			arr[i][j]=num;
			num++;
		}
		mid--;
		i++;
	}
  }

  for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]==0)
			continue;
		 printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
}
  
