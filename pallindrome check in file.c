#include<stdio.h>
#include<string.h>
int is_pal(char word[10])
{

    int i, length;
    int flag = 1;
    

    
    length = strlen(word);
    
    for(i=0;i < length ;i++)
	{
        if(word[i] != word[length-i-1])
		{
            flag = 0;
            break;
        }
    }

    return flag;
}
	

int main()
{
	FILE *p1, *p2;
	char word[10];
	int flag=0;
	p1=fopen("palindrom.txt", "r");
	p2=fopen("pallindrome1.txt", "a+");
	while(!feof(p1))
	{
		fscanf(p1,"%s", word);
		if(is_pal(word) == 1)
		{
			fprintf(p2, "%s ", word);
		}
	}
	fclose(p1);
	fclose(p2);
	
	
}
