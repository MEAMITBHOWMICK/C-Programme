#include<stdio.h>
int main()
{
	int n,a[10],i=0,k;
	printf("enter a integer:");
	scanf("%d" , &n);
	while(n!=0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(k=i-1;k>=0;k--)
	{
		printf("%d", a[k]);
	}
}
