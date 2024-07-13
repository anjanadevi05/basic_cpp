#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node *head1, *temp1, *head2, *temp2;
int top1=-1,top2=-1;

void push1(struct node *in_node)
{
	top1++;
	if(head1==NULL)
	{
		head1=in_node;
		temp1=head1;
	}
	else
	{
		temp1->next=in_node;
		temp1=in_node;
	}
}

void push2(struct node *in_node)
{
	top2++;
	if(head2==NULL)
	{
		head2=in_node;
		temp2=head2;
	}
	else
	{
		temp2->next=in_node;
		temp2=in_node;
	}
}

struct node *pop1()
{
	struct node *t;
	t=head1;
	head1=head1->next;
	top1--;
	return t;
}

struct node *pop2()
{
	struct node *t;
	t=head2;
	head2=head2->next;
	top2--;
	return t;
}

void enqueue()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	puts("enter the data");
	scanf("%d",&(newnode->data));
	newnode->next=NULL;

    while(top1!=-1)
        push2(pop1());

    push1(newnode);

    while(top2!=-1)
        push1(pop2());
}

void dequeue()
{
	if (head1 == NULL) {
		printf("Queue is empty!\n");
		return;
	}

	struct node *ele = pop1();
	printf("\nPopped element is %d",ele->data);
	free(ele);
}

void display()
{
	struct node *temp;
	temp=head1;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	int choice;
	do
	{
		puts("enter your choice or enter 0 to stop:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				exit(0);
		}
	}
	while(choice!=0);
	
	return 0;
}

