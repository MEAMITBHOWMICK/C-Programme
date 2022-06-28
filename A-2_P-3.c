#include<stdio.h>
#include<string.h>
int main()
{
	FILE *p1;
	char str[10],str1[10],word[10];
	int m,i,k;
	p1=fopen("Amit.txt", "r");
	while(!feof(p1))
	{
		k=0;
		fscanf(p1,"%s", word);
		m=strlen(word);
		for(i=0;i<m;i++)
		{
			if(word[i]!='a'&& word[i]!='e'&& word[i]!='i'&& word[i]!='o'&& word[i]!='u')
    	    {
    		str1[k]=word[i];
    		k++;
		    }
		}
		for(i=0;i<m;i++)
		{
			if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
    	    {
    		str1[k]=word[i];
    		k++;
		    }
		}
		str1[k]='\0';
		printf("%s \t", str1);

    }
}
