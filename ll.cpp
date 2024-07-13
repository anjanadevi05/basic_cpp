#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL,*temp,*newnode,*hello,*tail;
void insbeg()
{
    if(head==NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        head=newnode;
        temp=newnode;
        temp->next=NULL;
    }
    else
    {
     newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
}
void insend()
{
    if(head==NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        head=newnode;
        temp=newnode;
        temp->next=NULL;
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        temp->next=newnode;
        temp=newnode;
        newnode->next=NULL;
    }
}
void insmid()
{
    if(head==NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        head=newnode;
        temp=newnode;
        temp->next=NULL;
    }
    else
    {
        int i=1,n;
        temp=head;
        int pos=n/2;
        
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data: ");
        scanf("%d",&newnode->data);
        
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void delbeg()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void delend()
{
     if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            tail=temp;
            temp=temp->next;
        }
        tail->next=NULL;
        free(temp);
    }
}
void delmid()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else if(head==temp)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        int i=1,n;
        temp=head;
        int pos=n/2;
        while(i<pos)
        {
            temp=temp->next;
            hello=temp->next;
            i++;
        }
        temp->next=hello->next;
        free(hello);
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int data,n;
    printf("enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter data: ");
      scanf("%d",&newnode->data);
      if(head==NULL)
      {
          head=newnode;
          temp=newnode;
          temp->next=NULL;
      }
      else
      {
          temp->next=newnode;
          temp=newnode;
          temp->next=NULL;
      }
    }
    while(1)
    {
        int choice;
        printf("enter choice: ");
        scanf("%d",&choice);
        if(choice==0)
        break;
        switch(choice)
        {
            case 1:
            insbeg();
            break;
            case 2:
            insend();
            break;
            case 3:
            insmid();
            break;
            case 4:
            delbeg();
            break;
            case 5:
            delend();
            break;
            case 6:
            delmid();
            break;
            case 7:
            display();
            break;
            default:
            printf("invalid choice");
            break;
        }
    }
   return 0; 
}
