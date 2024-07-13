#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
int nodes;
struct node *root=NULL,*newnode;
void inorder(struct node *r )
{
	if(r==NULL)
	return;
	inorder(r->left);
	printf("%d",r->data);
	inorder(r->right);
}
void preorder(struct node *r )
{
	if(r==NULL)
	return;
	printf("%d",r->data);
	preorder(r->left);
	preorder(r->right);
}
void postorder(struct node *r )
{
	if(r==NULL)
	return;
	postorder(r->left);
	postorder(r->right);
	printf("%d",r->data);
}
struct node* create_node(int key)
{
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->left=newnode->right=NULL;
	return newnode;
}
struct node* create_tree(struct node* r,int key)
{
	if(r==NULL)
	{
		return create_node(key);
	}
	if(r->left==NULL)
	r->left=create_tree(r->left,key);
	else if(r->right==NULL)
	r->right=create_tree(r->right,key);
	else
	r->left->left=create_tree(r->left->left,key);
	return r;
}
int main()
{
	int data;
	do
	{
		puts("enter the data if child exist else enter -1");
		scanf("%d",&data);
		if(data != -1)
	    root=create_tree(root,data);
	}
	while(data != -1);
	puts("the inorder traversal:");
	inorder(root);
	puts("the preorder traversal:");
	preorder(root);
	puts("the postorder traversal:");
	postorder(root);
}
