#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=0, *newnode, *temp, *temp4;
	int a[]={4, 3, 8, 7, 8, 12, 9, 3, 81, 24, 4, 18, 8, 66, 39, 6, 3, 12};
	int i=0, n= sizeof(a)/sizeof(a[0]);
	while(i<n)
	{
		newnode= (struct node *)malloc(sizeof(struct node));
	    newnode->data=a[i];
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
	temp=head;
	printf("the list is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	temp=head;
	while(temp->next!=0)
	{
		temp4=temp;
		while(temp4->next!=0)
		{
			if(temp->data==temp4->next->data)
			{
				struct node *temp3;
				temp3=temp4->next;
				temp4->next=temp3->next;
				free(temp3);
			}
			else
			{
				temp4=temp4->next;
			}
		}
		temp=temp->next;
	}
	temp=head;
	printf("\n the updated list is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
}
	
