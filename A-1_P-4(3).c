#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char word[10];
	int i=0,j,l=0,flag=0,k=0,n;
	int a[10],b[10];
	ptr=fopen("Amit.txt", "r");
	while(!feof(ptr))
	{
		fscanf(ptr, "%s", word);
		n=strlen(word);
		a[i++]=n;
	}
	i=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(b[j]==a[i])
			flag=1;
		}
		if(flag==0)
		{
			b[l]=a[i];
		    l++;
		}

		flag=0;
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]==a[j])
			k++;
		
		}
		printf("%d   %d ", b[i],k);
		printf("\n");
		k=0;
	}
}
