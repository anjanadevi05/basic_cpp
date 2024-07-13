//simple stack operations using linked list
//push operation is adding an element in the end
//pop operation is deleting a element in the front and the underflow condition has to be checked
//top1 has no of element in stack 1
//top2 has no. of elements in stack 2
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head1,*temp1,*head2,*newnode,*temp2;
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
	struct node *ele=head1,*t;
	while(ele->next->next!=NULL)
	{
		ele=ele->next;
	}
	top1--;
	t=ele->next;
	ele->next=NULL;
	printf("\nPopped element is %d",t->data);
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
	int data,choice;
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
	
}
