#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL,*newnode=NULL,*temp=NULL;
int nodes;
void display()
{
 struct node *temp=head;
 do
 {
  printf("%d\t",temp->data);
  temp=temp->next;
}
while(temp!=NULL);
}
struct node *merge(struct node *x,struct node *y)
{
	if(x==NULL)
	return y;
	if(y==NULL)
	return x;
	struct node *s=NULL;
	if(x->data<y->data)
	{
		s=x;
		s->next=merge(x->next,y);
	}
	else 
	{
		s=y;
		s->next=merge(x,y->next);
	}
	return s;
}
struct node *mergesort(struct node *n)
{
	//base case
	if(n==NULL || n->next==NULL)
	return n;
	//breaking with mid point
	struct node *prev=n;
	struct node *temp=n->next;
	while(temp!=NULL && temp->next!=NULL)
	{
		prev=prev->next;
		temp=temp->next->next;
	}
	struct node *mid=prev->next;
	prev->next=NULL;//(when into 2 linked list `1st linked list last element to null)
	//left and right recursion
	struct node *a=mergesort(n);
	struct node *b=mergesort(mid);
	
	//to merge 2 sorted list
	//temp=merge(a,b);
	
	return merge(a,b);
	
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
newnode->next=NULL;
temp=head;
puts("original");
display();
puts("sorted");
head=mergesort(temp);
display();
}
