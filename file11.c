#include<stdio.h>
int main()
{
	FILE *ptr;
	char str[100];
	ptr=fopen("Amit.txt", "r");
	fscanf(ptr,"%s", str);
	printf("%s", str);
	
}
