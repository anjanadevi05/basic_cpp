//queue is used as stack lifo using ll
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL,*rear=NULL,*front2=NULL,*rear2=NULL;
void display()
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void enqueue1(int element)
{
	struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=element;
    ptr->next=NULL;
    if(front==NULL && rear==NULL)
    {
    	front=rear=ptr;
    	front->next=rear->next=NULL;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
		rear->next=NULL;
	}
}
void enqueue2(int element)
{
	struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=element;
    ptr->next=NULL;
    if(front2==NULL && rear2==NULL)
    {
    	front2=rear2=ptr;
    	front2->next=rear2->next=NULL;
	}
	else
	{
		rear2->next=ptr;
		rear2=ptr;
		rear2->next=NULL;
	}
}
int dequeue1()
{
	struct node *ptr;
	int ele;
	if(front==NULL && rear==NULL)
	{
		puts("queue underflows");
		return -1;
	}
	ptr=front;
	ele=ptr->data;
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		front=front->next;
	}
	return ele;
}
int dequeue2()
{
	struct node *ptr;
	int ele;
	if(front2==NULL && rear2==NULL)
	{
		puts("queue underflows");
		return -1;
	}
	ptr=front2;
	ele=ptr->data;
	if(front2==rear2)
	{
		front2=rear2=NULL;
	}
	else
	{
		front2=front2->next;
	}
	return ele;
}
void push()
{
	int data;
	puts("enter the data");
	scanf("%d",&data);
	struct node *temp;
	while(front!=NULL)
	{
		enqueue2(dequeue1());
	}
	enqueue1(data);
	while(front2!=NULL)
	{
		enqueue1(dequeue2());
	}
	display();
}
void pop()
{
	printf("the popped out element is %d",dequeue1());
	display();
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
				push();
				break;
			case 2:
				pop();
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
