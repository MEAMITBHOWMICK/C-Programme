#include<stdio.h>
#include<stdlib.h>
struct node{
	char name[15];
	int age;
	char cl[10];
	int marks;
	struct node *next;
};
int main()
{
	struct node *temp, *new_node, *head=NULL;
	int n,i,count=0,min;
	char a;
	printf("enter value of n:");
	scanf("%d", &n);
	while(count < n)
	{
		scanf("%c", &a);
		new_node = (struct node *)malloc(sizeof(struct node));
		printf("enter name of student %d ",count+1);
		//scanf("%s", new_node->name);
		gets(new_node->name);
		printf("enter age of student %d ",count+1);
		scanf("%d", new_node->age);
		printf("enter class of student %d ", count+1);
		scanf("%s", new_node->cl);
		printf("enter marks of student %d ",count+1);
		scanf("%d", new_node->marks);
		new_node->next=NULL;
		if(head==NULL)
		{
			head=temp=new_node;
		}
		else
		{
			temp->next=new_node;
			temp=new_node;
		}
		count++;
		
	}
	temp=head;
	while(temp!= NULL)
	{
		if(temp->marks >80)
		{
			printf("%d", temp->name);
		}
		else
		{
			printf("no student found");
		}

		temp=temp->next;
	}
	temp=head;
	min=temp->marks;
	while(temp!= NULL)
	{
		if((temp->marks)<min)
		{
			min=temp->marks;
		}
		temp=temp->next;
	}
	temp=head;
	while(temp != NULL)
	{
		if((temp->marks)==min)
		{
			printf("%s \n", temp->name);
			break;
		}
		temp = temp->next;
	}
}

