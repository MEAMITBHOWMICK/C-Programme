#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char ch;
	char str[100],str1[100];
	int i=0,l=0,k=0,j,flag=0,m,n;
	ptr=fopen("Amit.txt", "r");
	while((ch=fgetc(ptr))!=EOF)
	{
		if(ch!=' ')
		str[i++]=ch;
	}
	//printf("%s", str);
	//str[i]='\0';
	//i=0;
	m=strlen(str);
	for(i=0;i<m;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(str1[j]==str[i])
			flag=1;
		}
		if(flag==0)
		{
			str1[l++]=str[i];
		}

		flag=0;
	}
	//str1[l]='\0';
	n=strlen(str1);
	for(i=0;i<n;i++)
	{
		
		for(j=0;i<m;j++)
		{
			if(str1[i]==str[j])
			
			k++;
		
		}
		printf("%s   %d ", str[i],k);
		printf("\n");
		k=0;
	}
}
