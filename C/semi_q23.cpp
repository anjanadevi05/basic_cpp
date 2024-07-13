#include<stdio.h>
int main()
{
    char s1[100],s2[100],s3[100];
    int i=0,j=0,len=0;
    puts("enter 2 strings");
    gets(s1);
    gets(s2);
    while(s1[i]!='\0')
    {
    len++;
    i++;
    }
    for(i=len-1;i>=0;i--)
    {
       s3[j]=s1[i]; 
       j++;
    }
    puts(s3);
    i=0;
   while(s2[i]!='\0')
    {
        s3[len]=s2[i];
        len++;
        i++;
       
    }
    s3[len]='\0';
    puts(s3);
}
