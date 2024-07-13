#include<stdio.h>
#include<stdlib.h>
struct node
{
	int  data;
	struct node *left;
	struct node *right;
};
int nodes;

void inorder(struct node *r)
{
	if(r==NULL)
	return;
	inorder(r->left);
	printf("%d\t",r->data);
	inorder(r->right);
}
void preorder(struct node *r)
{
    if(r==NULL)
	return;
	printf("%d\t",r->data);
	preorder(r->left);
	preorder(r->right);	
}
void postorder(struct node *r)
{
	if(r==NULL)
	return;
	postorder(r->left);
	postorder(r->right);
	printf("%d\t",r->data);
}
struct node *create_tree()
{
	int i,x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	puts("enter the data:");
	scanf("%d",&x);
	if(x==-1)
	return 0;
	newnode->data=x;
	printf("enter left child of %d\n",x);
	newnode->left=create_tree();
	printf("enter right child of %d\n",x);
	newnode->right=create_tree();
	return newnode;	
}
int main()
{
	struct node *root;
	root=0;
	puts("enter the data if child node of exist else enter -1");
	root=create_tree();
	puts("the inorder traversal:");
	inorder(root);
	puts("\nthe preorder traversal:");
	preorder(root);
	puts("\nthe postorder traversal:");
	postorder(root);
}
