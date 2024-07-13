#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
	char ele;
    if(top == -1)
        return -1;
    else
       ele=stack[top--];
       return ele;
}

int main()
{
	char expression[30];
    char *e, x;
    int i,n;
    puts("Enter the expression : ");
    gets(expression);
    e=expression;
    n=strlen(e);
    int count1=0,count2=0;
    for(i=0;i<n;i++)
    {
    	if(expression[i]=='(')
    	{
    		push(expression[i]);
		}
		if(expression[i]==')')
		{
			push(expression[i]);
		}
	}
	for(i=top;i>=0;i--)
    {
    	if(stack[i]==')')
    	{
    		pop();
    	    count1++;
		}
		else if(stack[i]=='(')
		{
			pop();
			count2++;
		}
	}
if(top==-1 && count1==count2)
    {
        puts("parathesis balanced");
    }
    else
    puts("not balanced");
}
