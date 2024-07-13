#include<stdio.h>
struct student
{
	int student_id;
	char student_name[20];
	int student_marks;
};
int main()
{
	int n,choice,i,j,first=0,last=9999,f_index,l_index,failure,avg,sum=0,k;
	printf("enter the number of students\n");
	scanf("%d",&n);
	struct student s[n],temp,ab_avg[n],bel_avg[n];
	printf("enter the details of the students\n");
	for(i=0;i<n;i++)
	{
		printf("student %d\n",(i+1));
		scanf("%d%s%d",&s[i].student_id,s[i].student_name,&s[i].student_marks);
	}
	printf("enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-1-i;j++)
				{
					if(s[j].student_id>s[j+1].student_id)
					{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;
					}
				}
			}
			printf("after sorting:\n");
			for(i=0;i<n;i++)
			{
			    printf("student %d\n",(i+1));
				printf("%d\n%s\n%d\n",s[i].student_id,s[i].student_name,s[i].student_marks);
			}
			break;
			case 2:
				for(i=0;i<n;i++)
				{
					if(s[i].student_marks>first)
					{
						first=s[i].student_marks;
						f_index=i;
					}
					if(s[i].student_marks<last)
					{
						last=s[i].student_marks;
						l_index=i;
					}
				}
				printf("first rank details:\n");
				printf("%d\n%s\n%d\n",s[f_index].student_id,s[f_index].student_name,s[f_index].student_marks);
				printf("last rank details:\n");
				printf("%d\n%s\n%d\n",s[l_index].student_id,s[l_index].student_name,s[l_index].student_marks);
				break;
				case 3:
					printf("details  of failed students:\n");
					for(i=0;i<n;i++)
					{
						if(s[i].student_marks<25)
						{
							failure++;
							printf("%d\n%s\n%d\n",s[i].student_id,s[i].student_name,s[i].student_marks);
						}
					}
					printf("no. of failures: %d\n",failure);
					break;
					case 4:
						for(i=0;i<n;i++)
						{
							sum=sum+s[i].student_marks;
						}
						avg=sum/n;
						j=0;
						k=0;
						for(i=0;i<n;i++)
						{
							if(s[i].student_marks>avg)
							{
								ab_avg[j]=s[i];
								j++;
							}
							if(s[i].student_marks<avg)
							{
								bel_avg[k]=s[i];
								k++;
							}
						}
						printf("above average:\n");
						for(i=0;i<j;i++)
						{
							printf("student %d\n",(i+1));
							printf("%d\n%s\n%d\n",ab_avg[i].student_id,ab_avg[i].student_name,ab_avg[i].student_marks);
						}
						printf("below average:\n");
						for(i=0;i<k;i++)
						{
							printf("student %d\n",(i+1));
							printf("%d\n%s\n%d\n",bel_avg[i].student_id,bel_avg[i].student_name,bel_avg[i].student_marks);
						}
						break;
						case 5:
							printf("invalid choice!!");
							break;
							default:
								printf("invalid choice..");
		}
}

