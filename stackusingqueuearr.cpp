//queue is used as stack lifo
#include<stdio.h>
#include<stdlib.h>
int queue1[100],queue2[100];
int front=-1,rear=-1,size,n=0;
void push()
{
	int i;
	for(i=0;i<size;i++)
	{
		queue1[i+1]=queue2[i];
	}
}
void pop()
{
	int i;
	for(i=0;i<size;i++)
	{
		queue2[i]=queue1[i];
	}
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",queue1[i]);
	}
	printf("\n");
}
void enqueue(int ele)
{
	if(rear==(size-1))
	puts("queue overflows no more elements can be added");
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue1[0]=ele;
	}
	else
	{
		pop();
	    queue1[rear]=ele;
	    push();
		rear=rear+1;
	}
	n++;
}
void dequeue()
{
	if(front==-1)
	puts("no elements in the array");
	else
	{
		pop();
		printf("the popped out element is %d",queue1[0]);
		int i;
		for(i=0;i<rear;i++)
		queue1[i]=queue2[i+1];
	}
	n--;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
}


int main()
{
	int choice,data;
	puts("enter the size of the queue");
	scanf("%d",&size);
	do
	{
		puts("enter you choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			puts("enter data");
			scanf("%d",&data);
			enqueue(data);
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
	while(choice<4);
}
