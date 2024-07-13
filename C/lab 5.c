#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head,*temp,*newnode,*in_node;
int nodes;
void display()
{
temp=head;
    while(temp!=NULL)
    {
    printf("%d\t",temp->data);
    temp=temp->next;
}
}
insertbeg(struct node *n_node)
{
  temp=head;
  n_node->next=temp;
  n_node->prev=NULL;
  head=n_node;
  display();
}
insertmid()
{
	
}
insertend()
{
	
}
delbeg()
{
	
}
delmid()
{
	
}
delend()
{
	
}
int main()
{
int i,ch,choice;
puts("enter the number elements in the linked list");
scanf("%d",&nodes);
for(i=0;i<nodes;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
puts("enter the data:");
scanf("%d",&(newnode->data));
newnode->next=NULL;
if(head==NULL)
{
newnode->prev=NULL;
head=newnode;
temp=newnode;
 }
else
{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
}
puts("enter 1 to insert a element");
puts("enter 2 to delete a element");
do
{
puts("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		in_node=(struct node*)malloc(sizeof(struct node));
		puts("enter an element to insert");
		scanf("%d",&(newnode->data));
		puts("enter 1 to insert in the beginning");
		puts("enter 2 to insert in the middle");
		puts("enter 3 to insert in the end");
		scanf("%d",ch);
		switch(ch)
		{
			case 1:
				insertbeg(in_node);
				break;
			case 2:
				insertmid(in_node);
				break;
			case 3:
				insertend(in_node);
				break;
		}
		break;
	case 2:
		puts("enter 1 to delete in the beginning");
		puts("enter 2 to delete in the middle");
		puts("enter 3 to delete in the end");
		scanf("%d",ch);
		switch(ch)
		{
			case 1:
				delbeg();
				break;
			case 2:
				delmid();
				break;
			case 3:
				delend();
				break;
		}
		break;
	default:
		puts("invalid choice");
}
}
while(choice<3);
}
