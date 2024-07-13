#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*newnode,*prev,*start,*end,*mid;
int nodes;
void display()
{
 temp=head;
 do
 {
  printf("%d\t",temp->data);
  temp=temp->next;
}
while(temp!=NULL);
}
void middle_ele()
{
	
}
int main()
{
int i,data;
do
{
newnode=(struct node*)malloc(sizeof(struct node));
puts("enter the data else enter -1:");
scanf("%d",&data);
newnode->data=data;
if(data!=-1)
{
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
}
newnode->next=NULL;
}
while(data!=-1);
display();
}


