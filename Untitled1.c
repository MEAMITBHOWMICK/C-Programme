#include<stdio.h>
int main()
{
	int a[10][10],flag=0,i,j;
	printf("enter the matrix row wise:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a no:");
			scanf("%d" , &a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]!=a[j][i])
			flag=1;
		}
	}
	if(flag==1)
	printf("matrix is not symetric");
	else
	printf("matix is symetic");
}
