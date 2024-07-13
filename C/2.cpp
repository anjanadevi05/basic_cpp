#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
   int i,n,choice;
   struct node *newnode,*temp,*head,*ptr,*q,*tail;
   printf("enter the nodes:\n");
   scanf("%d",&n);
   printf("a linked list:\n");
   for(i=0;i<n;i++)
   {
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter data;\n");
       scanf("%d",&(newnode->data));
       newnode->next=NULL;
       if(head==NULL)
       {
          q=newnode;
          head=newnode;
       }
       else
       {
           q->next=newnode;
           q=newnode;
       }
       newnode->next=head;
   }
   while(choice!=8)
   {
       printf("enter the choice:\n");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           printf("add at beg:\n");
           q=(struct node *)malloc(sizeof(struct node));
           printf("enter key:\n");
           scanf("%d",&(q->data));
           q->next=NULL;
           tail=head;
           q->next=tail->next;
           tail->next=q;
           ptr=tail;
           break;
           case 2:
           	ptr=head;
           do
           {
               printf("%d\t",ptr->data);
               ptr=ptr->next;
           }
           while(ptr!=head);
           break;
           default:
           printf("no");
       }
   }
   return 0;
}
