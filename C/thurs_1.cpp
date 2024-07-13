#include<stdio.h>
struct project
{
int id,hyoj,hsalary,dyoj,dsalary,tyoj,tsalary,avgsalary;
char name[40],hname[40],dname[40],tname[40];
};
int main()
{
int n,i;
puts("Enter the number of projects:");
scanf("%d",&n);
struct project p[n];
for(i=0;i<n;i++)
{
puts("Enter project id and name:");
scanf("%d %s",&p[i].id,p[i].name);
puts("Enter head name,yoj,salary:");
scanf("%s %d %d",p[i].hname,&p[i].hyoj,&p[i].hsalary);
puts("Enter developer name,yoj,salary:");
scanf("%s %d %d",p[i].dname,&p[i].dyoj,&p[i].dsalary);
puts("Enter tester name,yoj,salary:");
scanf("%s %d %d",p[i].tname,&p[i].tyoj,&p[i].tsalary);
}
int flag,j;
struct project temp;
for(i=0;i<n-1;i++)
{
flag=0;
for(j=0;j<n-i-1;j++)
{
if(p[j].id>p[j+1].id)
{
temp=p[j];
p[j]=p[j+1];
p[j+1]=temp;
flag=1;
}
if(flag==0)
break;
}
}
puts("Sorted data:");
for(i=0;i<n;i++)
{
printf("%d %s\n%s %d %d\n%s %d %d\n",p[i].id,p[i].name,p[i].hname,p[i].hyoj,p[i].hsalary,p[i].dname,p[i].dyoj,p[i].dsalary,p[i].tname,p[i].tyoj,p[i].tsalary);
}
int min=2900;
for(i=0;i<n;i++)
{
if(p[i].hyoj<min)
min=p[i].hyoj;
}
for(i=0;i<n;i++)
{
if(p[i].hyoj==min)
printf("%d %s\n%s %d %d\n%s %d %d\n",p[i].id,p[i].name,p[i].hname,p[i].hyoj,p[i].hsalary,p[i].dname,p[i].dyoj,p[i].dsalary,p[i].tname,p[i].tyoj,p[i].tsalary);
}
int max=0;
for(i=0;i<n;i++)
{
p[i].avgsalary=p[i].hsalary+p[i].dsalary+p[i].tsalary;
if(p[i].avgsalary>max)
{
max=p[i].avgsalary;
j=i;
}
}
printf("Highest paid project:\n");
printf("%d %s\n%s %d %d\n%s %d %d\n",p[j].id,p[j].name,p[j].hname,p[j].hyoj,p[j].hsalary,p[j].dname,p[j].dyoj,p[j].dsalary,p[j].tname,p[j].tyoj,p[j].tsalary);
return 0;
}
