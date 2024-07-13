#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*newnode,*i_node,*prev;
int nodes;
void display()
{
 temp=head;
 do
 {
  printf("%d\t",temp->data);
  temp=temp->next;
}
while(temp!=head);
}
insertbeg(struct node *n_ad)
{
 prev=head;
 temp=head;
 n_ad->next=head;
 head=n_ad;
 while(prev->next!=temp)
 {
 prev=prev->next;
 }
 prev->next=head;
 nodes=nodes+1;
 display();
}
insertmid(struct node *n_ad)
{
 int count=0;
 temp=head;
 while(count!=(nodes/2))
 {
 prev=temp;
 temp=temp->next;
 count++;
 }
 n_ad->next=prev->next;
 prev->next=n_ad;
 nodes=nodes+1;
 display();
}
insertend(struct node *n_ad)
{
 temp=head;
 while(temp->next!=head)
 {
 prev=temp;
 temp=temp->next;
 }
 temp->next=n_ad;
 n_ad->next=head;
 nodes=nodes+1;
 display();
}
delbeg()
{
 temp=head;
 prev=head;
 head=head->next;
 while(prev->next!=temp)
 {
 	prev=prev->next;
 }
 prev->next=head;
 free(temp);
 nodes=nodes-1;
 display();	
}
delmid()
{
 int count=0;
 temp=head;
 while(count!=(nodes/2))
 {
 prev=temp;
 temp=temp->next;
 count++;
 }
 prev->next=temp->next;
 free(temp);
 nodes=nodes-1;
 display();	
}
delend()
{
 temp=head;
 do
 {
 prev=temp;
 temp=temp->next;
 }
 while(temp->next!=head);
 prev->next=head;
 free(temp);
 display();
}
int main()
{
int i,choice;
puts("enter the number of nodes in the list");
scanf("%d",&nodes);
for(i=0;i<nodes;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
puts("enter the data");
scanf("%d",&(newnode->data));
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
newnode->next=head;
puts("enter 1 to insert in the beginning");
puts("enter 2 to insert in the middle");
puts("enter 3 to insert in the end");
puts("enter 4 to delete in the beginning");
puts("enter 5 to delete in the middle");
puts("enter 6 to delete in the end");
do
{
puts("\nenter a choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
	i_node=(struct node*)malloc(sizeof(struct node));
    puts("enter the element to be inserted");
    scanf("%d",&(i_node->data));
    insertbeg(i_node);
    break;
case 2:
	i_node=(struct node*)malloc(sizeof(struct node));
    puts("enter the element to be inserted");
    scanf("%d",&(i_node->data));
    insertmid(i_node);
    break;
case 3:
	i_node=(struct node*)malloc(sizeof(struct node));
    puts("enter the element to be inserted");
    scanf("%d",&(i_node->data));
    insertend(i_node);
    break;
case 4:
    delbeg();
    break;
case 5:
    delmid();
    break;
case 6:
    delend();
    break;
default:
	exit(0);
}
}
while(choice<=6);
}
