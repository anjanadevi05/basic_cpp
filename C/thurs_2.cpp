#include<stdio.h>
void sen_jun(int x[],int c)
{
	int max=0,min=9999,i,sen_in=0,jun_in=0;
	for(i=0;i<c;i++)
	{
		if(x[i]>max)
		{
			max=x[i];
			sen_in=i;
		}
		if(x[i]<min)
		{
			min=x[i];
			jun_in=i;
		}
		
	}
	printf("the senior player of the team is the player %d  with experience %d\n",sen_in,max);
	printf("the junior player of the team is the player %d  with experience %d\n",jun_in,min);
}
int main()
{
	int n,m,player[m],i,j,k;
	printf("enter the number of teams\n");
	scanf("%d",&n);
	printf("enter the number of players in each team\n");
	scanf("%d",&m);
	int teams[n][m];
	for(i=0;i<n;i++)
	{
		printf("enter the experience of %d players of team %d\n",m,(i+1));
		for(j=0;j<m;j++)
		{
			scanf("%d",&teams[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<m;j++)
		{
			printf("%d",teams[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("team %d\n",(i+1));
		
		
		sen_jun(teams[i],m);
	}
	

}
