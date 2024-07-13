#include <stdio.h>
#include<string.h>
struct movie
{
	char movie_name[20];
	int release_year;
	char h_name[20];
	int h_age;
	char hn_name[20];
	int hn_age;
	char d_name[20];
};
int main()
{
	int n,i,temp,j;
	puts("enter the no. of movies");
	scanf("%d",&n);
	struct movie m[n],t[n];
	puts("enter the movie details:");
	for(i=0;i<n;i++)
	{
		printf("movie %d:",(i+1));
		scanf("%s%d%s%d%s%d%s",m[i].movie_name,&m[i].release_year,m[i].h_name,&m[i].h_age,m[i].hn_name,&m[i].hn_age,m[i].d_name);
	}
	for(i=1;i<n;i++)
	{
		temp=m[i].release_year;
		
		t[i]=m[i];
		for(j=i-1;j>=0;j--)
		{
			if(m[j].release_year>temp)
			m[j+1]=m[j];
			else
			break;
		}
		m[j+1]=t[i];
	}
	puts("after sorting according to year");
	for(i=0;i<n;i++)
	{
		printf("movie %d:",(i+1));
		printf("%s%d%s%d%s%d%s",m[i].movie_name,m[i].release_year,m[i].h_name,m[i].h_age,m[i].hn_name,m[i].hn_age,m[i].d_name);
	}
	puts("after sorting acc to age");
	for(i=0;i<n;i++)
	{
		if(m[i].h_age>m[i].hn_age)
		{
		printf("%s%s%d%s%d%s",m[i].movie_name,m[i].h_name,m[i].h_age,m[i].hn_name,m[i].hn_age,m[i].d_name);	
		}
		else
		{
		printf("%s%s%d%s%d%s",m[i].movie_name,m[i].hn_name,m[i].hn_age,m[i].h_name,m[i].h_age,m[i].d_name);	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s's movies\n",m[i].d_name);
		for(j=0;j<n;j++)
		{
				
			if(strcmp(m[i].d_name,m[j].d_name)==0 && (i!=j)&& (i<j))
			{
				printf("%s\n",m[i].movie_name);
			}
		}
	}
}
