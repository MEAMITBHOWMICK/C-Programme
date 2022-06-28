#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist.txt", "r");
	if(ptr==NULL)
	{
		printf("not exist");
	}
	else
	printf("file exist");
}
