#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head,*temp,*newnode,*in_node;
int count=0,high,low,mid;
void display()
{
temp=head;
    while(temp!=NULL)
    {
    printf("%d\t",temp->data);
    temp=temp->next;
    }  
}
int mid_ele(int l,int h)
{
	int i=0,mid,ele;
	mid=(low+high)/2;
	//printf("mid%d\t",mid);
	temp=head;
	while(i<mid)
	{
		temp=temp->next;
		i++;
	}
	ele=temp->data;
	return ele;
}
void b_search(int ele)
{
    low = 0;
    high = count - 1;
    mid = (low + high) / 2;
  
    while (high >= low)
    {
        if (ele == mid_ele(low, high))
        {
            puts("Element found!");
            return;
        }
        else if (ele > mid_ele(low, high))
        {
            low = mid + 1;
        }
        else if (ele < mid_ele(low, high))
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
  
    puts("Element not found!");
}

int main()
{
int i,key,ele;
do
{
newnode=(struct node*)malloc(sizeof(struct node));
puts("enter the data else enter -1:");
scanf("%d",&ele);
if(ele!=-1)
{
count++;
newnode->data=ele;
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
}
while(ele!=-1);
display();
puts("\nenter the element to be searched");
scanf("%d",&key);
b_search(key);
}
