#include<stdio.h>
#include<stdlib.h>
struct node{
	int exp;
	float co;
	struct node *next;
};
struct node* insert(struct node *head, int co, int exp)
{
	struct node *temp, *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->co=co;
	newnode->exp=exp;
	newnode->next=0;
	if(head==0 || exp > head->exp)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=0 && temp->next->exp > exp)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return head;
}
struct node* create(struct node* head)
{
	int exp, i,n;
	float co;
	printf("enter the no of term in your poly:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("enter coeff of the %d th term of your poly: ", i+1);
		scanf("%f", &co);
		printf("enter exponent of the %d th term of your poly: ", i+1);
		scanf("%d", &exp);
		head=insert(head, co, exp);
	}
	return head;
}
void print(struct node *head)
{
	struct node *temp1=head;
	if(temp1==0)
	printf("no poly");
	else
	{
	    while(temp1 != 0)
	    {
		    printf("(%.1fX^%d)",temp1->co,temp1->exp);
		    temp1=temp1->next;
		    if(temp1!=0)
		    printf(" + ");
		    else
		    printf("\n");
     	}
	}
}
struct node* Add(struct node *head1, struct node *head2)
{
	struct node *ptr1=head1, *ptr2=head2, *head=0;
	while(ptr1!=0 && ptr2 !=0)
	{
		if(ptr1->exp==ptr2->exp)
		{
			head=insert(head, ptr1->co+ptr2->co, ptr1->exp);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->exp > ptr2->exp)
		{
			head=insert(head, ptr1->co, ptr1->exp);
			ptr1=ptr1->next;
		}
		else
		{
			head=insert(head, ptr2->co, ptr2->exp);
			ptr2=ptr2->next;
		}
	}
	while(ptr1!=0)
	{
		head=insert(head, ptr1->co, ptr1->exp);
		ptr1=ptr1->next;
	}
	while(ptr2 !=0)
	{
		head=insert(head, ptr2->co, ptr2->exp);
		ptr2=ptr2->next;
	}
	return head;
}
struct node* Modify(struct node *head)
{
	struct node *temp=head, *temp1;
	while(temp->next != 0)
	{
		if(temp->exp==temp->next->exp)
		{
			temp1=temp->next;
			temp->next=temp1->next;
			free(temp1);
			temp1=0;
		}
		else
		temp=temp->next;
	}
	return head;
}
struct node* MulP(struct node *head1, struct node *head2)
{
	struct node *ptr1=head1, *ptr2=head2, *head=0;
	while(ptr1 !=0)
	{
		ptr2=head2;
		while(ptr2 !=0)
		{
			head=insert(head, ptr1->co*ptr2->co, ptr1->exp+ptr2->exp);
			ptr2= ptr2->next;
		}
		ptr1=ptr1->next;
	}
	return head;
}

int main()
{
	struct node *head1=0, *head2=0, *head3=0, *head4=0;
	head1=create(head1);
	head2=create(head2);
	printf("\nthe polynomial is : ");
	print(head1);
	printf("\nthe polynomial is : ");
	print(head2);
	head3=Add(head1, head2);
	printf("\nthe polynomial after addition is : ");
	print(head3);
	head4=MulP(head1, head2);
	head4=Modify(head4);
	printf("\nthe polynomial after multiplication is : ");	
	print(head4);
}
