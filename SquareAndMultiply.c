#include<stdio.h>
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
	int a, b, n, c;
	printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter the exponent ");
    scanf("%d",&b);
    printf("Enter the modulo ");
    scanf("%d",&n);
    c=SquareAndMultiply(a,b,n);
    printf("result is %d ", c);
}
