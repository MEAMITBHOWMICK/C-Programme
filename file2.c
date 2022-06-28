
#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen("frist.txt", "r");
	int c=fgetc(ptr);
	printf("1st character which i am reading is %c", c);
	c = fgetc(ptr);
	printf("\n 2nd character which i am reading %c", c);

	
}
