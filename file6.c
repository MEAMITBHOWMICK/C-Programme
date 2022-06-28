#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist.txt", "r+");
	fputc('H',ptr);
	fputs("welcome", ptr);
}
