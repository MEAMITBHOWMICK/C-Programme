#include<stdio.h>
int main()
{
	FILE *fp,*ft;
	char ch;
	fp =fopen("test.c", "r");
    ft =fopen("test1.c", "w+");
    if (fp == NULL)
        printf("Opening error");

    while (1) {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        if (ch == '/') {
            ch = fgetc(fp);
            if (ch == '*') {
                putc(' ', ft);
            }
        } else if (ch == '*') {
            ch = fgetc(fp);
            if (ch == '/') {
                putc(' ', ft);
            }
        } else {
            putc(ch, ft);
        }
    }
    fclose(fp);
    fclose(ft); 
}



