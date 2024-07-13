#include<stdio.h>
void in_sort(int q[100][100],int r,int c)
{
	int i,j,temp,*p,k,*t,*ele;
	for(k=0;k<r;k++)
	{
	  p=q+k;
	  ele=p;
	for(i=1;i<c;i++)
	{
		t=p;
		temp=*(p+1);
		for(j=i-1;j>=0;j++)
		{
			if(*t>temp)
			{
				*(t+1)=*t;
				t++;
			}
			else
			break;
		}
		*(t+1)=temp;
	}
	for(i=0;i<c;i++)
	{
		printf("%d",*ele);
		ele++;
	}
    printf("\n");
   }
}
int main()
{
 int i,j,arr[100][100],nc,nr;
 printf("enter the number of rows and columns\n");
 scanf("%d",&nr);
 scanf("%d",&nc);
 printf("enter array elements\n") ;
 for(i=0;i<nr;i++)
 {
 	for(j=0;j<nc;j++)
     {
 	   scanf("%d",&arr[i][j]);
    }

}
printf("original array:\n");
 for(i=0;i<nr;i++)
 {
 	for(j=0;j<nc;j++)
     {
 	   printf("%d\t",arr[i][j]);

    }
 	printf("\n");
}
printf("sorted array\n");
in_sort(arr,nr,nc);
}
