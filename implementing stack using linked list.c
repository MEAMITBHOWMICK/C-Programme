#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *top=0;
void push(int x)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data= x;
	newnode->link=top;
	top=newnode;
}
void display()
{
	struct node *temp=top;
	if(top==0)
	printf("stack is empty");
	else
	while(temp != 0)
	{
		printf("%d", temp->data);
		temp=temp->link;
	}
}
void peek()
{
	if(top==0)
	printf("stack is empty");
	else
	printf("%d", top->data);
}
void pop()
{
	struct node *temp=top;
	if(top==0)
	printf("stack is empty");
	else
	{
		printf("%d", top->data);
		top=top->link;
		free(temp);
		
	}
}
int main()
{
	push(2);
	push(5);
	push(7);
	display();
	peek();
	pop();
}
