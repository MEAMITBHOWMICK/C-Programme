#include<stdio.h>
int main()
{
	int n,f,m,i=0;
	printf("enter a no greater than 99:");
	scanf("%d",&n);
	f=n/1000;
	while(i<3)
	{
		m=n%10;
		f=f*10+m;
		n=n/10;
		i++;
	}
	printf("%d" , f);
}
