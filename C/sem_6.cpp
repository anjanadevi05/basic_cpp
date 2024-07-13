#include<stdio.h>
int sum=0,reverse=0,count=0;
int zero(int num)
{
 int d;
 if(num>10)
   {
 	d=num%10;
 	if(d==0)
 	count++;
 	zero(num/10);
	 }
	 return count;	
}
int sum_of_digits(int num)
{
  int d;
  if(num>0)
  {
  	d=num%10;
  	sum=sum+d;
  	sum_of_digits(num/10);
	  }	
	  return sum;
}
int rev(int num)
{
	int d;
	if(num>0)
	{
		d=num%10;
		reverse=(reverse*10)+d;
		rev(num/10);
	}
	return reverse;
}
int main()
{
	int n,choice,z,s,r;
	puts("enter a number");
	scanf("%d",&n);
	puts("enter 1 to find the number of zero,enter 2 to find the sum of digits,enter 3 to find the reverse of the number");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			z=zero(n);
			printf("/nnumber of zeros %d",z);
			break;
			case 2:
			    s=sum_of_digits(n);
			    printf("/nsum of digits %d",s);
			    break;
			    case 3:
			        r=rev(n);
			        printf("/nreverse of the number %d",r);
			        break;
			        default:
			        	puts("invalid choice");
	}
	return 0;
	
}
