#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node *head=NULL;
void push(int x){
	struct node *p;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=x;
	if(head==NULL){
	head=ptr;
	ptr->link=head;
	p=ptr;
   }
    else{
	   ptr->link=head;
	   head=ptr;
	   p->link=head;
    }
}
void pop(){
	struct node *p,*q;
	p=head;
	q=head;
	struct node *curr=head->link;
	while(curr!=head){
	curr=curr->link;
	p=p->link;
}
	head=q->link;
	p->link=head;
	free(q);
}
void display(){
	printf("%d",head->data);
	struct node *temp=head->link;
	while(temp!=head){
		printf("%d",temp->data);
		temp=temp->link;
	}
}
int main(){
	int choice,x;
	do{
		printf("enter the choice:");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("enter the data");
			scanf("%d",&x);
			push(x);
			display();
			break;
		case 2:
			pop();
			display();
			break;
		case 3:
			display();
			break;
	}
	}
	while(choice!=3);
	return 0;
}
