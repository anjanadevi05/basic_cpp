#include<stdio.h>
#include<string.h>
struct football//defining a global structure
{
	char un_id[10];
	char name[20];
	int match_played,match_won,match_draw,match_lost;
};
total(int x,int y,int z)
{/*function total returns the sum of matches won,lost and draw matches*/ 
	int total;
	total=x+y+z;
	return total;
}
display(char *uid,struct football *p)
{//p is a pointer pointing to the base address of the array of structures
	char id[20];
	int i=0;
	while(*uid!='\0')
	{//storing the entered unique id into a character array
	 id[i]=*uid;
	 uid++;
	 i++;	
	}
	for(i=0;i<3;i++)
	{//comparing the entered unique id with the unique id of each player
		if((strcmp(id,(p->un_id)))==0)
		{//if same,the details of the respective player is displayed
			printf("Name of player:%s\n",p->name);
			printf("Number of matches played:%d\n",p->match_played);
			printf("Number of matches won:%d\n",p->match_won);
			printf("Number of draw matches:%d\n",p->match_draw);
			printf("Number of matches lost:%d",p->match_lost);
		}
		p++;// increment the  pointer to point at the next structure
	}
}
int main()
{
	int i,t_matches;
	char id[20];
	printf("enter the followings details of the 3 football players:\n");
	printf("1.name of the player\n2.matches played\n3.matches won\n4.draw matches\n5.matches lost");
	 struct football play[3]={
	[0]= {.un_id="INDF501"},
	[1]={.un_id="INDF502"},
	[2]={.un_id="INDF503"}
     };//intializing the unique id for all the 3 players
     for(i=0;i<3;i++)
	{//getting the details of the players from the user
		printf("\nenter the details of player:%d\n",(i+1));
		scanf("%s%d%d%d%d",play[i].name,&play[i].match_played,&play[i].match_won,&play[i].match_draw,&play[i].match_lost);
	}
     printf("unique id of the players:\n");
     for(i=0;i<3;i++)
     {//displaying the unique id of the players
     	printf("player%i: %s\n",i+1,play[i].un_id);
     }
     printf("\nenter the unique id of the player to display their details\n");
     scanf("%s",id);
     display(id,&play);//function call to display the respective player's details
     for(i=0;i<3;i++)
     {//to check if the total no. of matches played is equal to the matches won,lost and draw matched
     	printf("\nplayer:%d\n",(i+1));
     	t_matches=total(play[i].match_won,play[i].match_draw,play[i].match_lost);//function call
     	if(t_matches==play[i].match_played)
     	printf("no. of matches won,lost and draw matches is equal to the no. of matches played");
     	else
     	printf("no. of matches won,lost and draw matches is not equal to the no. of matches played");
	 }
}

