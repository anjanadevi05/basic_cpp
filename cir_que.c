#include<stdio.h>
#include<stdlib.h>
int size,front=-1,rear=-1;
void display(int q[])
{
	int i;
	if(front==-1 && rear==-1)
	{
		puts("queue underflows");
		return;
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",q[i]);
	}
}
void insertion(int key,int q[])
{
	if((rear+1)%size==front)
	{
		puts("queue overflows");
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else
	{
		rear=(rear+1)%size;
	}
	q[rear]=key;
	display(q);
}
void deletion(int q[])
{
	int data;
	if(front==-1)
	{
	  puts("queue underflows");
	  return;
	}
	q[front]=0;
	if(front==rear)
	front=rear=-1;
	else
	front=(front+1)%size;
	return;
}
int main()
{
	int choice,ele,i;
	puts("enter the size of the array");
	scanf("%d",&size);
	int queue[size];
	for(i=0;i<size;i++)
	queue[i]=0;
	puts("enter 1 to insert element in the queue,2 to delete a element in the queue,and 3 to exit");
	 do
    {
    	puts("\nenter your choice");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
    			puts("enter element to insert");
    			scanf("%d",&ele);
    			insertion(ele,queue);
    			break;
    		case 2:
    			deletion(queue);
    			display(queue);
    			break;
    		case 3:
    			exit(0);
    			break;
    		default:
    			puts("invalid choice");
    	}
	}
	while(choice<3);
}
