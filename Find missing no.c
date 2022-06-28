#include<stdio.h>
int main()
{
	int n, i=0,a[10],s=0,m=0,l=0;
	printf("enter an integer:");
	scanf("%d", &n);
	for(i=1;i<=n-1;i++)
	{
		printf("enter a no:");
		scanf("%d", &a[i]);
	
	}
	for(i=0;i<n-1;i++)
	{
		s=s+a[i];
	}
	m=(n*(n+1))/2;
	l=m-s;
	printf("%d", l);
	

}
