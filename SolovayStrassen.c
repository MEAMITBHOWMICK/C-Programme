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
int Jacobi(int a, int n)
{
	a=a%n;
	if(a==0)
	return 0;
	if(n%4==3 && a%4==3)
	return -Jacobi(n,a);
	while(a%2==0)
	{
		
	}
	
} 
int main()
{
	int n, a, y
	printf("enter the number(odd positive): ");
	scanf("%d",&n);
	a=(rand()%n);
	x=Jacobi(a,n);
	if(x==0)
	printf("n composite.");
	y=SquareAndMultiply(a, (n-1)/2, n);
	if(x==y)
	printf("n is prime.");
	else
	printf("n is composite.");
}
