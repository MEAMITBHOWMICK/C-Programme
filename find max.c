#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c[10],i = 0,j = 0,k,max;
	char b[10][10],ch;
	FILE *f1;
	f1=fopen("max.txt", "r");
	while((ch=fgetc(f1)) != EOF)
	{
		if(ch!= ',')
    	{
		   	b[i][j] = ch;
		   	printf("%s\t", a[i]);
	       	j++;
		}
		else if(ch == ',')
		{
			i++;
		}
				
	}
	k = i;
	for(i = 0; i <= k ;i ++)
	{
		c[i] = atoi(a[i]);
		printf("\n%d", c[i]);
	}
	/*for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d", max);*/
}
