#include <stdio.h>
#include <stdlib.h>
struct node {
    int key;
    struct node *left, *right;
};
// A function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
//A function to insert a new node with given key in BST
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
// A function to do inorder traversal of BST
void inorder(struct node* root)
{
	if(root == 0)
	return;
	inorder(root->left);
	printf("%d ", root->key);
	inorder(root->right);
}
//A function to do preorder traversal of BST
void preorder(struct node *root)
{
	if(root==0)
	return;
	printf("%d ", root->key);
	preorder(root->left);
	preorder(root->right);
}
//A function to do postorder traversal of BST
void postorder(struct node *root)
{
	if(root==0)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->key);
}
//A function to delete a node
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
	int a[]={10, 12, 5, 4, 20, 8, 7, 15, 13};
	int n=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<n;i++)
	{
		root=insert(root, a[i]);
	}
	printf("\n preorder traversal is : ");
	preorder(root);
	printf("\n postorder traversal is : ");
	postorder(root);
	printf("\n inorder traversal is : ");
	inorder(root);
	insert(root, 39);
	printf("\n inorder traversal after adding 39 is : ");
	inorder(root);
	root=BDelete(root, 12);
	printf("\n inorder traversal after deleting 12 is : ");
	inorder(root);
}
