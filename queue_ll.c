#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *first,*newnode,*front=0,*rear=0,*temp;
void display()
{
	temp=first;
	puts("elements in queue:");
	if(front==NULL)
	{
		puts("queue underflows");
		return;
	}
    else
    {
    	do
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        while(temp!=NULL);
	}
}
void deletion()
{
	if(front==NULL)
	{
		rear=NULL;
		puts("queue underflows");
		return;
	}
	else
	{
	temp=front;
	front=front->next;
	first=front;
	free(temp);
	}
}
void insertion(int key)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	if(front==NULL)
	{
		first=newnode;
		front=newnode;
		rear=newnode;
		front->next=rear->next=NULL;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=NULL;
	}
	display();  	
}
int main()
{
	int choice,ele;
    puts("enter 1 to insert element in the queue , 2 to delete element from the queue , 3 to exit");
    do
    {
    	puts("\nenter your choice");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
    			puts("enter element to insert");
    			scanf("%d",&ele);
    			insertion(ele);
    			break;
    		case 2:
    			deletion();
    			display();
    			break;
    		case 3:
    			exit(0);
    		default:
    			puts("invalid choice");
    			
		}
	}
	while(choice<3);
}
