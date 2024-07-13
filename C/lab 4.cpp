#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/' || x=='%')
        return 2;
    return 0;
}
int main()
{
	char expression[30];
    char *e, x;
    puts("Enter the expression : ");
    gets(expression);
    e=expression;
    puts("the postfix expression:");
    while(*e!='\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e=='(')
            push(*e);
        else if(*e == ')')
        {
            do
            {
            	x=pop();
			   printf("%c ", x);
		    }
		    while(pop()!='(');
        }
        else
        {
            while(priority(stack[top])>= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
   while(top!=-1)
    {
        printf("%c ",pop());
    }
}
