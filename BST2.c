#include <stdio.h>
#include <stdlib.h>
struct node {
    int key;
    struct node *left, *right;
};
//find maximun of 2 number
int max(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
}
//find height
int Bheight(struct node *root)
{
	if(root==0)
	return -1;
	int leftheight=Bheight(root->left);
	int rightheight=Bheight(root->right);
	return (max(leftheight, rightheight))+1;
}
//find maximum
int Bmax(struct node *root)
{
	struct node *temp=root;
	while(temp->right !=0)
	{
		temp=temp->right;
	}
	return temp->key;
}
//find minimun
int Bmin(struct node *root)
{
	struct node *temp=root;
	while(temp->left !=0)
	{
		temp=temp->left;
	}
	return temp->key;
}
//find minimum returnig pointer
struct node* Bmin1(struct node *root)
{
	struct node *temp=root;
	while(temp && temp->left !=0)
	{
		temp=temp->left;
	}
	return temp;
}
//search an element
int search(struct node *node, int x)
{
	if(node==0)
	return 0;
	else if(node->key == x)
	return 1;
	else if(node->key < x)
	return search(node->right, x);
	else
	return search(node->left, x);
}
// A utility function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
// A utility function to do inorder traversal of BST
void inorder(struct node* root)
{
	if(root == 0)
	return;
	inorder(root->left);
	printf("%d ", root->key);
	inorder(root->right);
}
//proorde traversal
void preorder(struct node *root)
{
	if(root==0)
	return;
	printf("%d ", root->key);
	preorder(root->left);
	preorder(root->right);
}
//postoorde traversal
void postorder(struct node *root)
{
	if(root==0)
	return;
	preorder(root->left);
	preorder(root->right);
	printf("%d ", root->key);
}
// A utility function to insert a new node with given key in BST 
struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
//delete a node
/*struct node* BDelete(struct node *root, int x)
{
	if(root==0)
	return root;
	else if(root->key<x)
	root->right=BDelete(root->right, x);
	else if(root->key>x)
	root->left=BDelete(root->left, x);
	else
	{
		if((root->left==0) && (root->right)==0)
		{
			free(root);
		}
		else if(root->left==0)
		{
			struct node *temp=root;
			root=root->right;
			free(temp);
			//return root;
		}
		else if(root->right==0)
		{
			struct node *temp=root;
			root=root->left;
			free(temp);
			//return root;
		}
		else
		{
			struct node *temp=Bmin1(root->right);
			root->key=temp->key;
			root->right = BDelete(root->right, temp->key);
		}
	}
	return root;
}*/
struct node* BDelete(struct node *root, int key)
{
	struct node *temp=root, *temp1=root;
	while(temp != 0)
	{
		if(key > temp->key)
		{
			temp1=temp;
			temp=temp->right;
		}
		else if (key < temp->key)
		{
			temp1=temp;
			temp=temp->left;
		}
		else
		{
			if(temp->right ==0 && temp->left==0)
			{
				free(temp);
				temp=0;
			}
			else if (temp->right ==0)
			{
				if(temp1->key < temp->key)
				{
					temp1->right=temp->left;
					free(temp);
					temp=0;
				}
				else
				{
					temp1->left=temp->left;
					free(temp);
					temp=0;
				}
			}
			else if (temp->left == 0)
			{
				if(temp1->key > temp->key)
				{
					temp1->left=temp->right;
					free(temp);
					temp=0;
				}
				else
				{
					temp1->right=temp->right;
					free(temp);
					temp=0;
				}
			}
			else 
			{
				struct node *temp2=temp;
				temp=temp->left;
				while(temp->right != 0)
				{
					temp=temp->right;
				}
				temp2->key=temp->key;
				free(temp);
				temp=0;
			}
			
		}
	}
	return root;
}
int main()
{
    struct node* root = NULL;
    root = insert(root, 25);
    int i,x;
    int a[20]={25,20,16,10,22,30,40,5,1,8,15,12,28,38,48,39,50};
    for(i=1;i<17;i++)
    {
    	insert(root,a[i]);
    	
	}
	printf("enter the no to search: ");
	scanf("%d", &x);
	if(search(root, x)==1)
	{
		printf("found");
	}
	else
	printf("not found");
	int min= Bmin(root);
	printf("\n minimun element is : %d ", min);
	int max= Bmax(root);
	printf("\n maximum element is : %d ", max);
	int height = Bheight(root);
	printf("\n height of the tree: %d ", height);
	printf("\n preorder traversal is : ");
	preorder(root);
	printf("\n postorder traversal is : ");
	postorder(root);
	printf("\n inorder traversal is : ");
	inorder(root);
	root=BDelete(root,40);
	printf("\n inorder traversal is after deletion : ");
	inorder(root);
}
