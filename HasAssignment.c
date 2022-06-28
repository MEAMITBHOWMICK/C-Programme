#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
//struct node *table=(struct node *)malloc(10*(sizeof(struct node)));
struct node* newnode(int x)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=0;
	return temp;
}
void insert(struct node *table, int x)
{
	if((table+(x%10))->data==-1)
	{
		(table+(x%10))->data=x;
	}
	else
	{
		while((table+(x%10))->next !=0)
		{
			(table+(x%10))->next=(table+(x%10))->next->next;
		}
		(table+(x%10))->next=newnode(x);
		
	}
	
}
int Search(struct node *table, int x)
{
	if((table+(x%10))->data==x)
	{
		return x%10;
	}
	else
	{
		while((table+(x%10))->next!=0)
		{
			if((table+(x%10))->data==x)
			return x%10;
			else
			(table+(x%10))->next=(table+(x%10))->next->next;
		}
	}
	return -1;
}
void Delete(struct node *table, int x)
{
	if((table+(x%10))->data==x && (table+(x%10))->next==0)
	{
		(table+(x%10))->data=-1;
	}
	else if((table+(x%10))->data==x && (table+(x%10))->next!=0)
	{
		struct node *temp=(table+(x%10))->next;
		(table+(x%10))->data=temp->data;
		(table+(x%10))->next=temp->next;
		free(temp);
	}
	else if((table+(x%10))->data!=x && (table+(x%10))->next!=0)
	{
		struct node *temp=(table+(x%10));
		while(temp->data !=0)
		{
			if(temp->data==x)
			{
				if(temp->next==0)
				free(temp);
				else
				{
					struct node *temp1=temp->next;
					temp->data=temp1->data;
					temp->next=temp1->next;
					free(temp);
				}
			}
			else
			temp=temp->next;
		}
		
	}
}

int main()
{
	//struct node *table[10]=(struct node *)malloc(10*sizeof(struct node));
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
	for(i=0;i<10;i++)
	{
		if((table+i)->next==0)
		printf("%d \n", (table+i)->data);
		else
		{
			struct node *temp=(table+i);
			while(temp->next!=0)
			{
				printf("\n%d ", temp->data);
				temp=temp->next;
				printf("%d ", temp->data);
			}
			printf("\n");
		}
	}
	printf("enter the value u want to search:");
	scanf("%d", &x);
	int flag= Search(table, x);
	if(flag!=-1)
	printf("data found at the postion: %d ", flag);
	else
	printf("not found");
	printf("\nenter the value want to delete:");
	scanf("%d", &y);
	Delete(table, y);
	printf("\nafter deleting:\n");
	for(i=0;i<10;i++)
	{
		if((table+i)->next==0)
		printf("%d \n", (table+i)->data);
		else
		{
			struct node *temp=(table+i);
			while(temp->next!=0)
			{
				printf("\n%d ", temp->data);
				temp=temp->next;
				printf("%d ", temp->data);
			}
			printf("\n");
		}
	}
	
}
