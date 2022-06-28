/*4. Write a C program to print N Fibonacci numbers which are prime.*/

#include<stdio.h>
int main()
{
	int i=1 ,j=1, n,k=2;
	int a=1 , b=1,s=0,temp=0;
	printf("enter n :");
	scanf("%d" , &n);
	while(i<=n)
	{
		s=a;
		a=b;
		b=s+b;
		if(s==1)
		{
			temp=0;
			continue;
		}
		else
	    {
		
		for(k=2;k<s;k++)
		{
			if(s%k ==0)
			temp=1;
		}
		if(temp==0)
		{
			printf("\t %d" ,s);
		    temp=0;
		    i++;
	    }
	    else
	    {
	    	temp=0;
	    	continue;
		}
	    }
        
	}
		
}
