/*1. Write a C program to compute the sum of 1+x+x^2/2!+x^3/3!+......................+x^n/n! when x and n
are given (take these as inputs).*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x, n ;
	int i=1,j=1,f=1;
	float s =1.0;
	printf("enter value of x : ");
	scanf(" %d" , &x);
	printf("enter value of n : ");
	scanf(" %d" , &n);
	for(i=1;i<=n;i++)
	{
		f=f*(x/i);
		s=s+f;


	}
    printf("the sum is : %f" , s);


}
