#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("max.txt", "w");
	fputc('H',ptr);
	fputs("welcome", ptr);
}
	
