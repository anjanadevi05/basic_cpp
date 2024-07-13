#include<stdio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *left=NULL;
	struct node *right=NULL;
	int height;
};
struct node *root=NULL;
void display(struct node *root)
{
	if(root==NULL)
	return;
	printf("%d\t",root->key);
	display(root->left);
	display(root->right);
}
struct node *create_node(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->key=data;
	newnode->left=newnode->right=NULL;
	newnode->height=1;
	return newnode;
}
int height(struct node *h)
{
	if(h==NULL)
	return 0;
	else
	return h->height;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int getbalance(struct node *n)
{
	if(n==NULL)
	return 0;
	else
	return (height(n->left)-height(n->right));
}
struct node *minvalue(struct node *n)
{
	struct node *current=n;
	while(current->left!=NULL)
	current=current->left;
	return current;
}
struct node *leftrotate(struct node *y)
{
	struct node *x=y->right;
	struct node *t2=x->left;
	
	x->left=y;
	y->right=t2;
	
	x->height=1+max(height(x->left),height(x->right));
	y->height=1+max(height(y->left),height(y->right));
	return x;
}
struct node *rightrotate(struct node *y)
{
	struct node *x=y->left;
	struct node *t2=x->right;
	
	x->right=y;
	y->left=t2;
	
	x->height=1+max(height(x->left),height(x->right));
	y->height=1+max(height(y->left),height(y->right));
	return x;
}
struct node *insert_node(struct node *root,int data)
{
	if(root==NULL)
	return create_node(data);
	else if(data>root->key)
	root->right=insert_node(root->right,data);
	else if(data<root->key)
	root->left=insert_node(root->left,data);
	else
	return root;
	root->height=1+max(height(root->left),height(root->right));
	int balance=getbalance(root);
	if(balance>1 && data>root->left->key)
	{
	root->left=leftrotate(root->left);
	return rightrotate(root);
	}
	if(balance>1 && data<root->left->key)
	return rightrotate(root);
	if(balance<-1 && data>root->right->key)
	return leftrotate(root);
	if(balance<-1 && data<root->right->key)
	{
		root->right=rightrotate(root->right);
	    return leftrotate(root);
	}
	return root;
}
struct node *del_node(struct node *root,int data)
{
	if(root==NULL)
	return root;
	if(root->key>data)
	root->left=del_node(root->left,data);
	else if(root->key<data)
	root->right=del_node(root->right,data);
	else
	{
		if(root->left==NULL ||root->right==NULL)
		{
			struct node *temp=root->left?root->left:root->right;
			if(temp==NULL)
			{
				temp=root;
				root=NULL;
			}
			else
			{
				*root=*temp;
			}
			free(temp);
		}
		else
		{
			struct node *temp=minvalue(root->right);
			root->key=temp->key;
			root->right=del_node(root->right,temp->key);
		}
		if(root==NULL)
		return root;
		root->height=1+max(height(root->left),height(root->right));
		int balance=getbalance(root);
		if(balance>1 && getbalance(root->left)>=0)
		return rightrotate(root);
	    if(balance>1 && getbalance(root->left)<0)
	    {
	    	root->left=leftrotate(root->left);
	        return rightrotate(root);
		}
	    if(balance<-1 && getbalance(root->right)>0)
	    {
	    	root->right=rightrotate(root->right);
	    	return leftrotate(root);
		}
	    if(balance<-1 && getbalance(root->right)<=0)
	    return leftrotate(root);
     return root;
	}
}
int main()
{
	int choice,ele;
	do
	{
		puts("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			puts("enter element to insert");
			scanf("%d",&ele);
			root=insert_node(root,ele);
			puts("the avl tree:");
			display(root);
		    break;
		case 2:
			puts("enter element to delete");
			scanf("%d",&ele);
			root=del_node(root,ele);
			display(root);
		    break;
		case 3:
			exit(0);
			break;
			
	}
	}
	while(choice<4);
}

