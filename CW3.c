#include<stdio.h>
int fact(int i)
{
	if(i==0)
	return 1;
	else
	return (i*fact(i-1));
	
}
int c(int i, int j)
{
	return(fact(i)/(fact(j)*fact(i-j)));
}
int main()
{
	int  n , i,j ;
	printf("enter n:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
	
	for(j=0;j<(n-i-1);j++)
	printf(" ");
	for(j=0;j<=i;j++)
	printf("%3d", c(i,j));
	printf("\n");
}
	
}
