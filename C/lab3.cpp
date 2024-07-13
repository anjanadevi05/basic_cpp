#include<stdio.h>
#include<stdlib.h>
int arr[100],n,i;
void display();
void insert(int e_in,int p_in)
{
for(i=n;i>=p_in;i--)
{
arr[i+1]=arr[i];
}
arr[p_in]=e_in;
n=n+1;
display();
}
void del(int pos)
{
for(i=pos;i<n;i++)
{
arr[i]=arr[i+1];
}
n=n-1;
display();
}
void display()
{
    puts("the elements in the array are:");
for(i=0;i<n;i++)
   {
    printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
int choice,ele,pos;
puts("enter the number of elements in the array");
scanf("%d",&n);
puts("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
puts("to insert the element:");
puts("enter  1 to insert in the beginning");
puts("enter  2 to insert in the ith position");
puts("enter  3 to insert in the end");
puts("to delete the element:");
puts("enter  4 to delete in the beginning");
puts("enter  5 to delete in the ith position");
puts("enter  6 to delete in the end");
do
{
puts("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
puts("enter the element to be inserted");
scanf("%d",&ele);
insert(ele,0);
break;
case 2:
puts("enter the element to be inserted");
   scanf("%d",&ele);
   puts("enter position to be inserted");
   scanf("%d",&pos);
    insert(ele,pos-1);
    break;
    case 3:
    puts("enter the element to be inserted");
    scanf("%d",&ele);
    insert(ele,n);
    break;
    case 4:
    del(0);
    break;
    case 5:
    puts("enter the position to be deleted");
    scanf("%d",&pos);
    del(pos-1);
    break;
    case 6:
    del(n-1);
    break;
   default:
   printf("invalid choice");
exit(0);    
}
}
while(choice<6);
}
