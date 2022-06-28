#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist1.txt", "a+");
	fputc('H',ptr);
	fputs("welcome to hell amit", ptr);
}
