#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1,size;
char stack[100];
void push(char ch)
{
if(top==(size-1))
printf("stack overflows\n");
else
{
top++;
stack[top]=ch;
}
}
void pop()
{
char p;
if(top==-1)
printf("stack underflows");
else
{
p=stack[top];
top--;
}
printf("%c",p);
}
int main()
{
	int i;
	char str[100];
	puts("enter a string to reverse");
	gets(str);
	size=strlen(str);
	for(i=0;i<size;i++)
	{
		push(str[i]);
	}
	puts("The reversed string:");
	for(i=0;i<size;i++)
	{
		pop();
	}
}
