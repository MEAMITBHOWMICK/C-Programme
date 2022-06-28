#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist.txt", "r");
	int ch;
	while((ch=fgetc(ptr))!=EOF)
	{
		printf("%c", ch);
	}


	
}
