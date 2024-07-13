#include<stdio.h>
struct student
{
   char name[30];
   int age;
   int mark;	
}stud;
void sort(struct student *st,int total)
{
	int i,j;
	char temp[30];
	for(i=0;i<total;i++)
	{
		for(j=0;j<(total-i);j++)
		{
			if(st->name[0]<(st++)->name[0])
			{
				temp=
			}
		}
	}
}
int main()
{
	int no,i;
	puts("enter the number of the students:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("enter the student data of student %d:",(i+1));
		scanf("%s,%d,%d",stud[i].name,stud[i].age,stud[i].mark);
	}
	sort(stud,no);
}
