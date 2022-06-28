#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	//Createing a linked list by inserting the following items/values sequentially {4, 3, 8, 7, 8, 12, 9, 3, 81, 24, 4, 18, 8, 66, 39, 6, 3, 12}
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
	// Printing Linked List.
	temp=head;
	printf("the list is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	//Insert value 6 into the 6th position of the linked list
	temp=head;
	int position =6;
	i=1;
	while(i<position-1)
	{
		temp=temp->next;
		i++;
	}
	newnode= (struct node *)malloc(sizeof(struct node));
	newnode->data=6;
	newnode->next=temp->next;
	temp->next=newnode;
	temp=head;
	printf("\n the updated list after adding 6 is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	//Delete value 66 from the resultant linked list:
	temp=head;
	while(temp->next->data != 66)
	{
		temp=temp->next;
	}
	struct node *temp1 = temp->next;
	temp->next=temp1->next;
	free(temp1);
	temp=head;
	printf("\n the updated list is after deleting 66 :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	//Remove the duplicate elements present in the above unsorted resultant linked list
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
	printf("\n the updated list after removing duplicate is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	temp=head;
	int max= temp->data;
	while(temp!=0)
	{
		if(max< temp->data)
		{
			int temp0 =max;
			max=temp->data;
			temp->data=temp0;
		}
		temp=temp->next;
	}
	printf("\n maximum element : %d ", max);
	//Sort the above resultant linked list: 
	temp=head;
	printf("\n the  list before sorting is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	temp=head;
	int k=0;
	while(k<17)
	{
		temp=head;
		while(temp->next!=0)
		{
			if(temp->data > temp->next->data)
			{
				int temp00=temp->data;
				temp->data=temp->next->data;
				temp->next->data=temp00;
			}
			temp=temp->next;
		}
		k++;
	}
    temp=head;
	printf("\n the sorted list is :");
	while(temp!=0)
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}
	//Find the length, middle element and average values of the above resultant linked list:
    temp= head;
	int len=0;
	float s=0.0;
	while(temp!=0)
	{
		s=s+temp->data;
		temp=temp->next;
		len++;
	}
	printf("\n length : %d " , len);
	printf("\n sum of the numbers : %f", s);
	float avg= (s/len);
	printf("\n avg is : %.4f ", avg);
	temp=head;
	i=0;
	while(i<(len+1)/2)
	{
		temp=temp->next;
		i++;
	}
	printf("\n the middle element is: %d ", temp->data);
	//Finally generate the reverse order of the above resultant linked list:
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
		printf("%d ", temp->data);
		temp=temp->next;
	}
	//Find the maximum element of the above resultant linked list:
	/*temp=head;
	int max= temp->data;
	while(temp!=0)
	{
		if(max< temp->data)
		{
			int temp0 =max;
			max=temp->data;
			temp->data=temp0;
		}
		temp=temp->next;
	}
	printf("\n maximum element : %d ", max);*/
}
