#include<stdio.h>
#include<math.h>
int main()
{
	char a[7]="HELLOW";
	int i=0, j=0, k=0, x=0;
	int p[50], b, b1[7], c[50], p1[50]; 
	while(i != 6)
	{
		b=a[i];
		k=6;
		while(b != 0)
		{
			b1[k--]=b%2;
			b=b/2;
		}
		for(j=0;j<7;j++)
		{
			p[7*i+j]=b1[j];
		}
		i++;
	}
	printf("plaintext is : ");
	for(i=0;i<42;i++)
	{
		printf("%d", p[i]);
	}
	printf("\n");
	int n=6,temp;
	int a2[6]={1,1,0,1,0,1}, b2[n], K[50];
	for(i=0;i<6;i++)                          
	  b2[i]=a2[i];      
	i=0,k=0;
	while(1)
	{
		K[k++]=a2[n-1];
		temp=(a2[0]+a2[5])%2;      
		for(i=n-1;i>0;i--)     
		{
			a2[i]=a2[i-1];         
		}                    
		a2[0]=temp;
		i=0;
		while(i<n)
		{
			if(a2[i] != b2[i])   
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
		printf("%d", K[i]);
	}
	for(i=0;i<42;i++)
	{
		c[i]=(p[i]+K[i])%2;
	}
	printf("\nthe ciper text: ");
	for(i=0;i<42;i++)
	{
		printf("%d", c[i]);
	}
	for(i=0;i<42;i++)
	{
		p1[i]=(c[i]+K[i])%2;
	}
	printf("\nthe recovered plain text: ");
	for(i=0;i<42;i++)
	{
		printf("%d", p1[i]);
	}
	i=0;
	printf("\nthe massege is: ");
	while(i != 6)
	{
		x=0;
		for(j=0;j<7;j++)
		{
			c[j]=p1[j+7*i];
		}
		for(j=0;j<6;j++)
		{
			x=x+c[j]*pow(2, 6-j);
		}
		x=x+c[6];
		printf("%c", x);
		i++;
	}
}

