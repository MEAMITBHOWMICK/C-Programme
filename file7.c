#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist1.txt", "w+");
	fputc('H',ptr);
	fputs("welcome to here", ptr);
}
