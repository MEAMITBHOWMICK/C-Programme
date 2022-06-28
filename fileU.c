#include<stdio.h>
int main()
{
	FILE *f;
	int i=1;
	f= fopen("Amit.txt", "r");
	int c;
	while((c=fgetc(f))!=EOF)
	{
		if(c==32)
		i++;
	}
	printf("%d", i);
}
