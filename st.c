#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int mark_per;
}a[5];
getdetails(struct student d[5])
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("enter details:");
	scanf("%s%d%d",d[i].name,d[i].age,d[i].mark_per);
	 }
    display(d);
}
display(struct student st[5])
{
	int i;
   for(i=0;i<5;i++)
	{
	printf("%s%d%d",st[i].name,st[i].age,st[i].mark_per);
    }	
}
int main()
{
 getdetails(a);	
 return 0;
}
