#include<stdio.h>
int display(int *s,int x,int y);
int main()
{
    int n,m;
    int a[n][m],i,j;
    printf("enter:");
    scanf("%d%d",&n,&m);
    printf("enter:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    display(a,n,m);
    return 0;
}
display(int *s,int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",*(s+i*y+j));
        }
    }
}
