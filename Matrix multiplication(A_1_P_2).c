/*2. Given two matrices A and B, you need to write a C program to get C=AB (Multiplication of A and B)*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,p,q;
	int a[10][10] , b[10][10] , c[10][10];
	int i , j ,k ;
	printf("enter value of m :");
	scanf(" %d", &m);
	printf("enter value of n :");
	scanf(" %d", &n);
	printf("enter value of p :");
	scanf(" %d", &p);
	printf("enter value of q :");
	scanf(" %d", &q);
	if(p != n)
	{
		printf("multiplication not possiable !");
	}
	else
	{
		printf("enter matrix A row wise : ");
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				
				scanf("%d" ,&a[i][j]);
			}
		}
		printf("enter matrix B row wise : ");
		for(i=1;i<=p;i++)
		{
			for(j=1;j<=q;j++)
			{
				
				scanf("%d" ,&b[i][j]);
			}
		}
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=q;j++)
			{
				c[i][j]=0;
				for(k=1;k<=n;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf(" Matrix A  : \n");
	    for(i=1;i<=m;i++)
	    {
		for(j=1;j<=n;j++)
		{
			printf("\t %d" ,a[i][j]);
		}
		printf("\n");
     	}
     	printf("Product Matrix C  : \n");
	    for(i=1;i<=p;i++)
	    {
		for(j=1;j<=q;j++)
		{
			printf("\t %d" ,b[i][j]);
		}
		printf("\n");
     	}
	    printf("Product Matrix C  : \n");
	    for(i=1;i<=m;i++)
	    {
		for(j=1;j<=q;j++)
		{
			printf("\t %d" ,c[i][j]);
		}
		printf("\n");
        }
	}


}
