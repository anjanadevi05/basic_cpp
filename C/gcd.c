#include<stdio.h>
int main()
{
	int a,b,i,gcd=1;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	for(i=0;i<a && i<b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=gcd*i;
		}
	}
	printf("the gcd is: %d",gcd);
 return 0;
	
}
