#include<stdio.h>

#include<stdlib.h>
int main()
{
	FILE *f;
	f=fopen("max1.txt","w+");
	int n, i,a[10]={0};
    printf("enter number of numbers we want to check:");
	scanf("%d", &n);
	printf("enter the number:");
	for(i=0;i<n;i++)
	{
		printf("enter a no:");
		scanf("%d", &a[i]);
		fprintf(f,"%d", a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		fscanf(f,"%d", &a[i]);
	}
	int max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	fprintf(f,"The maximun element is : %d", max);
	fclose(f);
}

