#include<stdio.h>
int main()
{
	int a[10]={2,5,12,15,18,25,36,46,56,85};
	int i,j,k;
	int x;
	printf("enter no to be searched");
	scanf("%d" , &x);
	i=0,j=9;
	while(i<=j)
	{
		k=(i+j)/2;
		if(a[k]==x)
		{
		   printf("no is present in the array at %d th position", k);
		   break;
	    }
		else if(a[k]<x)
		i=k+1;
		else
		j=k-1;
	}
	printf("not found");
}
