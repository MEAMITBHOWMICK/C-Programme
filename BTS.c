#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node* create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter data : ");
	scanf("%d", &x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("enter the left child of %d", x);
	newnode->left=create();
	printf("enter the right child of %d", x);
	newnode->right=create();
	return newnode;


}
void preorder(struct node* root)
{
	if(root==0)
	return;
	printf("%d \t",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node *root)
{
	if(root==0)
	return;
	inorder(root->left);
	printf("%d \t", root->data);
	inorder(root->right);
}
void postorder(struct node *root)
{
	if(root==0)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d \t", root->data);
}
int main()
{
	struct node *root =0;
	printf("enter data in this order : 10, 5, 4, -1, -1, 8, 7, -1, -1, -1, 12, -1, 20, 15, 13, -1, -1, -1, -1 \n");
	root=create();
	//printf("enter data in this order : 10, 5, 4, -1, -1, 8, 7, -1, -1, -1, 12, -1, 20, 15, 13, -1, -1, -1, -1 \n");
	printf("\n preorder traversal is : \t");
	preorder(root);
	printf("\n inorder traversal is : \t");
	inorder(root);
	printf("\n postorder traversal is : \t");
	postorder(root);
}
