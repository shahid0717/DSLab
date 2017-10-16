#include<stdio.h>
#include<stdlib.h>

typedef struct bst
 {
	int data;
	struct bst *left,*right;
 }node;
 
 int search(node *r,int num)
 {
	if(r==NULL)
	{
		return 0;
	}
	else
	{	if(r->data==num)
		{
			return 1;
		}
		else
		{
			if(num>r->data)
				return search(r->right,num);		
			else
				return search(r->left,num);
		}
	}
}

void insert(node **r,int num)
{
	node *temp,*ptr;
	temp=*r;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;
	ptr->left=ptr->right=NULL;
	if(temp==NULL)
	{	ptr=(node*)malloc(sizeof(node));
		ptr->data=num;
		ptr->left=NULL;
		ptr->right=NULL;
		*r=ptr;
	}
	else
	{
		if(num>temp->data)
		{
			insert(&temp->right,num);
		}
		else
			insert(&temp->left,num);
		}
	}

 
void traverse_order(node *r)
{	
	if(r!=NULL)
	{
	traverse_order(r->left);
	printf("%d\t",r->data);
	traverse_order(r->right);
	}

}

void search_node(node **x,node **parent,int *f,node *root,int num)
{
	node *temp;
	temp=root;
	if(root==NULL)
		return;
	while(temp!=NULL)
	{
	if(num==temp->data)
	{
		*f=1;
		*x=temp;
		return;
	}
	*parent=temp;
	if(num>temp->data)
		temp=temp->right;
	else
		temp=temp->left;
	}
}

void delete(node **r,int num)
{ 	node *temp,*parent,*xsucc,*x;
	int f=0;
	parent=NULL;x=NULL;
	temp=*r;
	search_node(&x,&parent,&f,temp,num);
	if(f==0)
	{ printf("\n THE ELEMNET NOT FOUND");
		return;
	}
	else
	{	
		if(x->left==NULL && x->right==NULL)  // x has no child
		{
			if(x->data>parent->data)
				parent->right=NULL;
			else
				parent->left=NULL;
		}
		else
		{
			if(x->left!=NULL && x->right==NULL) // x have left child 
			{
				if(x->data>parent->data)
				parent->right=x->left;
			else
				parent->left=x->left;;
			}
			else
			{
				if(x->right!=NULL && x->left==NULL)  // x have right child
				{
					if(x->data>parent->data)
						parent->right=x->right;
					else
						parent->left=x->right;
				}
				else
				{
					if(x->left!=NULL && x->right!=NULL)  // have both child
					{
						parent=x;
						xsucc=x->right;
						while(xsucc->left!=NULL)
						{	parent=xsucc;
							xsucc=xsucc->left;
						}
						if(xsucc->data>parent->data)
						{
							parent->right=NULL;
						}
						else
						{
							parent->left=NULL;
						}
							x->data=xsucc->data;
							x=xsucc;
					}
				}
			}
		}
	}
				free(x);
}

void main()
{
	node *root=NULL;
		prinf("\nENTER YOUR CHOICE\n");
		printf("\n1.INSERT\n2.DELETE\n.3.DISPLAY\n4.EXit\n");
		
}
