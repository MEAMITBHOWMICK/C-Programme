#include<stdio.h>
//function for inserting node
void insert(int b[], int x)
{
	int i;
	for(i=0;i<10;i++)
	{
		int index=(x+i)%10;
		if(b[index]==0)
		{
			b[index]=x;
			break;
		}
	}
	if(i==10)
	printf("\n %d can't be inserted", x);
}
// function for search for a value
void search(int b[], int x)
{
	int i;
	for(i=0;i<10;i++)
	{
		int index=(x+i)%10;
		if(b[index]==x)
		{
			printf("\n%d found at the position %d", x, index);
			break;
		}
	}
	if(i==10)
	printf("\n %d not found", x);
}
// function for deleting a value
void Delete(int b[], int x)
{
	int i;
	for(i=0;i<10;i++)
	{
		int index=(x+i)%10;
		if(b[index]==x)
		{
		    b[index]=0;
			break;
		}
	}
	if(i==10)
	printf("\n %d not present in the table", x);
}
int main()
{
	int a[]={25, 37, 28, 45, 49, 70, 89, 81, 31, 22, 43, 56, 73, 68};
	int n=sizeof(a)/sizeof(a[0]);
	int b[10]={0},i;
	for(i=0;i<n;i++)
	{
		insert(b, a[i]);
	}
	printf("\nhash table is :");
	for(i=0;i<10;i++)
	printf("%d ", b[i]);
	search(b, 32);
	search(b, 31);
	Delete(b,45);
	Delete(b, 29);
	printf("\ntable after deletion : ");
	for(i=0;i<10;i++)
	printf("%d ", b[i]);
}
