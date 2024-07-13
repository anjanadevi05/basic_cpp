#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL,*newnode=NULL,*temp=NULL,*tail=NULL;
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
struct node *partition(struct node *start,struct node *end)
{
	if(start==end || start==NULL || end==NULL)
	    return start;
	struct node *pivot_prev=start;
	struct node *current=start;
	int pivot=end->data;
	while(start!=end)
	{
		if(start->data<pivot)
		{
			pivot_prev=current;
			int temp=current->data;
			start->data=temp;
			current=current->next;
		}
		start=start->next;
	}
	int temp=current->data;
	current->data=pivot;
	end->data=temp;
	return pivot_prev;
}
void quicksort(struct node *start,struct node *end)
{
	if(start==end)
	return;
	struct node *pivot_prev=partition(start,end);
	quicksort(start,pivot_prev);
	quicksort(head, pivot_prev);
    quicksort(pivot_prev->next, end);	
	
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
tail=newnode;
newnode->next=NULL;
puts("original");
display();
puts("sorted");
quicksort(head,tail);
display();
}
