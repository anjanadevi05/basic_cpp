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
struct node* search(struct node* r,int key )
{
	if(r==NULL || r->data==key)
	{
	    return r;
	}
	if(key<(r->data))
	return search(r->left,key);
	else if(key>(r->data))
	return search(r->right,key);
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
	    r=create_node(key);
	    return r;
	}
	if(key<(r->data))
	r->left=create_tree(r->left,key);
	else if(key>=(r->data))
	r->right=create_tree(r->right,key);
	return r;
}
int main()
{
	int data,ele;
	struct node* s;
	do
	{
		puts("enter the data if child exist else enter -1");
		scanf("%d",&data);
		if(data != -1)
	    root=create_tree(root,data);    
	}
	while(data != -1);
	puts("enter element to be searched");
	    scanf("%d",&ele);
	    s=search(root,ele);
	    if(s!=NULL)
	    puts("element  searched");
	    else
	    puts("element not searched");
	puts("the inorder traversal:");
	inorder(root);
	puts("the preorder traversal:");
	preorder(root);
	puts("the postorder traversal:");
	postorder(root);
}
