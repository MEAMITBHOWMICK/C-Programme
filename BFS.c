#include <stdio.h>
#include <stdlib.h>
struct node {
    int key;
    struct node *left, *right;
};
struct key{
	struct node *ptr;
	struct key *next;
};
struct key *front=0, *rear=0;
//Function to do enque
void enque(struct node *x)
{
	struct key *newnode=(struct key*)malloc(sizeof(struct key));
	newnode->ptr=x;
	newnode->next=0;
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
//Function to do deque
void deque()
{
	struct key *temp=front;
	if(front==0 && rear==0)
	{
		printf("underflow");
	}
	else
	{
		printf("%d ", front->ptr->key);
		front=front->next;
		free(temp);
	}
}
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
//Function to do BFS
void Bfs(struct node *root)	
{
	enque(root);
	while(front!=0)
	{
		if(front->ptr->left !=0)
		enque(front->ptr->left);
		if(front->ptr->right!=0)
		enque(front->ptr->right);
		deque();
	}
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
	printf("\n inorder traversal is : ");
	inorder(root);
	printf("\nBFS is: ");
	Bfs(root);
}
	

