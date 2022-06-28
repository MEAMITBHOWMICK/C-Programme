#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
// function for creating node
struct node* newnode(int x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=0;
	return temp;
}
//function for inserting node
void insert(struct node *table, int x)
{
	if((table+(x%10))->data==-1)
	{
		(table+(x%10))->data=x;
	}
	else
	{
		struct node *temp=(table+(x%10));
		while(temp->next !=0)
		{
			temp=temp->next;
		}
		temp->next=newnode(x);
		
	}
	
}
// function for search for a value
void Search(struct node *table, int x)
{
	struct node *temp=(table+(x%10));
	if(temp->data == x)
	{
		printf("\nData found at %d th position: ", x%10);
	}
	else if(temp->next!=0)
	{
		while(temp!=0)
		{
			if(temp->data==x)
			{
				printf("\nData found at %d th position: ", x%10);
			    break;
			}
			else
			temp=temp->next;
		}
	}
	else
	printf("\nData not found! ");
}
// function for deleting a value
void Delete(struct node *table, int x)
{
	struct node *temp3=(table+(x%10));
	if(temp3->data==x && temp3->next==0)
	{
		temp3->data=-1;
	}
	else if(temp3->data==x && temp3->next!=0)
	{
		struct node *temp=temp3->next;
		temp3->data=temp->data;
		temp3->next=temp->next;
		free(temp);
	}
	else
	{
		while(temp3 !=0)
		{
			if(temp3->data==x)
			{
				if(temp3->next==0)
				free(temp3);
				else
				{
					struct node *temp1=temp3->next;
					temp3->data=temp1->data;
					temp3->next=temp1->next;
					free(temp1);
				}
			}
			else
			temp3=temp3->next;
		}
		
	}
}
int main()
{
	struct node *table;
    table=(struct node *)malloc(10*(sizeof(struct node)));
	int i,x,y;
	int a[]={25, 37, 28, 45, 49, 70, 89, 81, 31, 22, 43, 56, 73, 68};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<10;i++)
	{
		(table+i)->data=-1;
		(table+i)->next=0;
	}
	for(i=0;i<n;i++)
	{
		insert(table, a[i]);
	}
	printf("the hash table is : \n");
    for(i=0;i<10;i++)
	{
		if((table+i)->next==0)
		printf("%d \n", (table+i)->data);
		else
		{
			struct node *temp=(table+i);
			while(temp!=0)
			{
				printf("%d ", temp->data);
				temp=temp->next;
			}
			printf("\n");
		}
	}
	insert(table, 35);
	insert(table, 32);
	insert(table, 42);
	insert(table, 52);
	insert(table, 66);
	insert(table, 76);
	insert(table, 59);
	insert(table, 69);
	printf("the updated hash table is : \n");
    for(i=0;i<10;i++)
	{
		if((table+i)->next==0)
		printf("%d \n", (table+i)->data);
		else
		{
			struct node *temp=(table+i);
			while(temp!=0)
			{
				printf("%d ", temp->data);
				temp=temp->next;
			}
			printf("\n");
		}
	}
	Search(table, 32);
	Search(table, 42);
	Search(table, 76);
	Search(table, 68);
	Search(table, 66);
	Delete(table, 37);
	Delete(table, 45);
	Delete(table, 81);
	Delete(table, 56);
	Delete(table, 66);
    printf("\nthe updated hash table after deletion : \n");
    for(i=0;i<10;i++)
	{
		if((table+i)->next==0)
		printf("%d \n", (table+i)->data);
		else
		{
			struct node *temp=(table+i);
			while(temp!=0)
			{
				printf("%d ", temp->data);
				temp=temp->next;
			}
			printf("\n");
		}
	}
}
