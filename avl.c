#include<stdio.h>
#include<stdlib.h>
struct node
{
	int  data;
	struct node *left;
	struct node *right;
	int height;
};
struct node *root=NULL,*newnode;
void preorder(struct node *r)
{
    if(r==NULL)
	return;
	printf("%d\t",r->data);
	preorder(r->left);
	preorder(r->right);	
}
void inorder(struct node *r)
{
	if(r==NULL)
	return;
	inorder(r->left);
	printf("%d\t",r->data);
	inorder(r->right);
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int get_ht(struct node *n)
{
	if(n==NULL)
	return 0;
	return n->height;
}
struct  node *create_node(int key)
{
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data-key;
	newnode->right=NULL;
	newnode->left=NULL;
	newnode->height=1;
	return newnode;
}
int balance_factor(struct node *n)
{
	int h;
	if(n==NULL)
	return 0;
	else
	{
	   h=get_ht(n->left)-get_ht(n->right);
	   return h;	
	}
}
struct node *rightRotate(struct node *y){
    struct node *x,*t2;
    t2=x->right;
    x=y->left;
    x->right = y;
    y->left =t2;
 
    x->height = max(get_ht(x->right), get_ht(x->left)) + 1;
    y->height = max(get_ht(y->right), get_ht(y->left)) + 1;
 
    return x;
}
 
struct node *leftRotate(struct node *x){
    struct node* y = x->right;
    struct node* T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = max(get_ht(x->right), get_ht(x->left)) + 1;
    y->height = max(get_ht(y->right), get_ht(y->left)) + 1;
 
    return y;
}
 
struct node *insert(struct node* node, int key){
    if (node == NULL)
        return  create_node(key);
 
    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
 
    node->height=1 +max(get_ht(node->left), get_ht(node->right));
    int bf = balance_factor(node);
 
        if(bf>1 && key<node->left->data)
		{
            return rightRotate(node);
        }
    
        if(bf<-1 && key>node->right->data)
		{
            return leftRotate(node);
        }
    if(bf>1 && key>node->left->data)
	{
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if(bf<-1 && key<node->right->data)
	{
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
 
int main()
{
    int choice,key;
    puts("enter 1 to insert node,2 to delete the node and 3 to display ");
    do
    {
    	puts("enter your choice");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
    			puts("enter the key to insert");
    			scanf("%d",&key);
    			root=insert(root,key);
    			break;
    		case 2:
    			break;
    		case 3:
    			inorder(root);
    			preorder(root);
    			break;
    		default:
    			puts("invalid choice");
		}
	}
	while(choice<4);
}
