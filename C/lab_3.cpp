#include<stdio.h>
int top=-1,stack[100],stack2[100],size,top1=-1;
void push(int ele)
{
if(top==(size-1))
printf("stack overflows\n");
else
{
top++;
stack[top]=ele;
}
}
int pop()
{
int p;
if(top==-1)
printf("stack underflows");
else
{
p=stack[top];
top--;
}
return p;
}
void display()
{
int i;
puts("the element in the stack are:");
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
puts("\nthe popped out elements:");
for(i=0;i<=top1;i++)
{
printf("%d\t",stack2[i]);
}
}
int main()
{
int choice,n,ele,c;
puts("enter the number of elements in the stack");
scanf("%d",&size);
do{
puts("\nenter 1 to push the element,enter 2 to pop the element,enter 3 to display the stack");
scanf("%d",&choice);
switch(choice)
{
case 1:
puts("enter the element to be pushed");
scanf("%d",&n);
push(n);
break;
case 2:
ele=pop();
top1++;
stack2[top1]=ele;
printf("the popped element is %d\n",ele);
break;
case 3:
    display();
    
break;
default:
puts("invalid choice");
}
}
while(choice<4);
return 0;
}
