#include<stdio.h> 
#include<ctype.h> //header file for isdigit and isalpha function.    
#include<string.h>
char stack[50];
int top = -1;
//Function for push in the stack
void push(char item)
{
	if(top >=49)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		stack[++top] = item;
	}
}
//Function for pop from the stack
char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
	}
	else
	{
		item = stack[top--];
		return item;
	}
}
//funtion for checking operator
int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
//Function for checking operator precedence
int precedence(char symbol)
{
	if(symbol == '^')
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')          
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
//Function for conversion
void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
	int i=0, j=0;
	char item;
	char x;
    push('(');                              
	strcat(infix_exp,")");                 
	item=infix_exp[i];        
	while(item != '\0')        
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_exp[j++] = item;              
		}
		else if(is_operator(item) == 1)     
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_exp[j++] = x;                  
				x = pop();                     
			}
			push(x);
			push(item);                 
		}
		else if(item == ')')         
		{
			x = pop();                   
			while(x != '(')               
			{
				postfix_exp[j++] = x;
				x = pop();
			}
		}
		else
		{ 
			printf("\nInvalid infix Expression.\n");       
		}
        item = infix_exp[++i]; 
	} 
    postfix_exp[j] = '\0';
}
int main()
{
	char infix[50], postfix[50];         
	printf("\nEnter Infix expression : ");
	gets(infix);
    InfixToPostfix(infix,postfix);                   
	printf("Postfix Expression: ");
	puts(postfix);                   
}
