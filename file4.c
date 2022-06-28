#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist.txt", "r");
	char str[45];
	fgets(str,12,ptr);
	printf("the string %s", str);
}
