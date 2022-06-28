#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist1.txt", "r");
	if(ptr==NULL)
	{
		printf("not exist");
	}
	fseek(ptr,0,2);
	printf("the size of the file: %ld bytes", ftell(ptr));
	
}
