#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head1,*temp,*ptr;
int top1;
void display()
{
	struct node *temp;
	temp=head1;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	while(temp!=head1);
	printf("\n");
}
void push1(int data)
{
	struct node *in_node;
	in_node=(struct node*)malloc(sizeof(struct node));
	in_node->data=data;
	in_node->next=NULL;
	if(head1==NULL)
	{
		head1=in_node;
		temp=head1;
	}
	else
	{
		temp->next=in_node;
		temp=in_node;
		
	}
	temp->next=head1;
	top1++;
}
void pop()
{
	if(head1==NULL)
	puts("stack underflows");
	else
	{
		temp=head1;
		while(temp->next!=head1)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=head1;
		printf("popped out element is %d",temp->data);
		free(temp);
	}
	top1--;
}
int main()
{
	int data,choice;
	do
	{
		puts("enter your choice or enter 0 to stop:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				puts("enter data");
				int data;
				scanf("%d",&data);
				push1(data);
				display();
				break;
			case 2:
				pop();
				display();
				break;
			case 3:
				display();
				break;
			default:
				exit(0);
		}
	}
	while(choice!=0);
}
