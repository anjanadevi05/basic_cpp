#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,len1,len2;
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	struct emp
	{
		char name[50];
		int sal;
	};
	struct emp e[n],temp;
	for(i=0;i<n;i++)
	{
			printf("Enter the name of employee and salary : \n");
			scanf("%s %d",e[i].name,&e[i].sal);			
	}
	for(i=0;i<n;i++)
	{			
			printf("%s\t%d\n",e[i].name,e[i].sal);			
	}
	
	for(i=0;i<n-1;i++)
	{
		
		for(j=0;j<n-1-i;j++)
		{
			len1=strlen(e[j].name);
			len2=strlen(e[j+1].name);
			if(len2<len1)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
	printf("After sorting: \n");
	for(i=0;i<n;i++)
	{			
			printf("%s\t%d\n",e[i].name,e[i].sal);			
	}
	return 0;
}

