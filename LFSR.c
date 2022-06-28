#include<stdio.h>
int main()
{
	int n, i=0,j=0,k=0,temp;
	int a[n], b[n], c[50];
	printf("Enter the degree of the LFSR:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("enter initial seed");
		scanf("%d", &a[i]);
	}
	for(i=0;i<4;i++)                          
	b[i]=a[i];      
	i=0;
	while(1)
	{
		c[k++]=a[n-1];
		temp=(a[0]+a[3])%2;      
		for(i=n-1;i>0;i--)     
		{
			a[i]=a[i-1];         
		}                    
		a[0]=temp;
		i=0;
		while(i<n)
		{
			if(a[i] != b[i])   
			break;
			else
			i++;
		} 
		if(i==n)
		break;
		else
		continue;
	}
	printf("the key stream : ");
	for(i=0;i<k;i++)
	{
		printf("%d", c[i]);
	}
}
