#include<stdio.h>
#include<stdlib.h>
struct node
{
	char name[10];
	struct node *next;
};
int main()
{
	//Createing a linked list 
	struct node *head=0, *newnode, *temp;
	int n,i=1;
	printf("number of node you want to create: ");
	scanf("%d", &n);
	while(i<=n)
	{
		newnode= (struct node *)malloc(sizeof(struct node));
		printf("\nenter name of the %d th student: ", i);
		scanf("%s", &newnode->name);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		i++;
	}
	//Printing the list
	temp=head;
	printf("the list is :");
	while(temp!=0)
	{
		printf("%s ", temp->name);
		temp=temp->next;
	}
	//reverse the list
	temp=head;
	struct node *prevnode=0, *currentnode=head, *nextnode=head;
	while(nextnode !=0)
	{
		nextnode= nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
	temp=head;
	printf("\n the reversed list is :");
	while(temp!=0)
	{
		printf("%s ", temp->name);
		temp=temp->next;
	}
}
