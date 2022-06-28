#include<stdio.h>
#define N 5
int top=-1;
int stack[N];
void push()
{
	int x;
	printf("enter data:");
	scanf("%d", &x);
	if(top==N-1)
	printf("overflow");
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	int item;
	if(top==-1)
	printf("underflow");
	else
	{
		item=stack[top];
		top--;
		printf("%d", item);
	}
}
void peek()
{
	if(top==-1)
	printf("stack is empty");
	else
	printf("topmost element is %d", stack[top]);
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d \t",stack[i]);
	}
}
int main()
{
int ch;
do
{
	printf("enter choice : 1-push, 2-pop, 3-peek, 4-display \n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1 :
			push();
			break;
		case 2 :
		    pop();
			break;
		case 3 :
		    peek();
			break;
		case 4 :
		    display();
			break;
		default :
		    printf("invalid choice");				
	}
}while(ch !=0);
}

