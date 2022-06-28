#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch;
	int i=0;
	ptr=fopen("Amit.txt", "r");
	while((ch=fgetc(ptr))!=EOF)
	{
		if(ch!=' ')
		i++;
	}
	printf("%d ", i);
}
