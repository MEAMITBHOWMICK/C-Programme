#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int SquareAndMultiply(int a, int b, int n)
{
	int l=floor(log(b))+1;
	int c[l],i=l-1,j=0,z=1;
	while(b>0)
	{
		c[i--]=b%2;
		b=b/2;
	}
	for(j=l-1;j>=0;j--)
	{
		z=(z*z)%n;
		if(c[j]==1)
		z=(z*a)%n;
	}
	return z;
}
int main()
{
	int n, k=0, b, d=0, a;  
	printf("enter the number: ");
	scanf("%d",&n);
	int l=n-1;
	while(l/2==0)
	{
		k++;
		l=l/2;
	}
	a=(rand()%n);
	b=SquareAndMultiply(a, l, n);
	if(b==1)
	{
		printf("n is prime.");
	}
	for(d=0;d<k;d++)
	{
		if(b==-1)
		printf("n is prime.");
		else
		b=(b*b)%n;
	}
	if(d==k)
	{
		printf("n is composite.");
	}
}
