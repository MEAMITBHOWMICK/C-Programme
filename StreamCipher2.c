#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
	long long int m=pow(2,10);
	int k7[7]={1,1,0,1,0,1,0}, k11[11]={1,1,0,1,0,1,0,1,0,1,0}, k13[13]={1,1,0,1,0,1,0,1,0,1,0,1,1},p[m],c[m],p1[m];
	int i,j,k,n=0,l=0,temp,flag1=0;
//	for(i=0;i<;i++)
//	{
//		p[i]=(rand()%2);
//	}
	printf("the plain text is:");
	for(i=0;i<m;i++)
	{
		printf("%d", p[i]=(rand()%2));
	}
	while(n<m)
	{
		if(k13[12]==1)
		{
			c[l++]=(p[n]+k7[6])%2;
			temp=(k7[0]+k7[6])%2;      
		    for(i=6;i>0;i--)     
			{
				k7[i]=k7[i-1];         
			}                    
			k7[0]=temp;
		}
		else
		{
			c[l++]=(p[n]+k11[10])%2;
			temp=(k11[0]+k11[10])%2;      
		    for(i=10;i>0;i--)     
			{
				k11[i]=k11[i-1];         
			}                    
			k11[0]=temp;
		}
		temp=(k13[0]+k13[12])%2;      
		for(i=12;i>0;i--)     
		{
			k13[i]=k13[i-1];         
		}                    
		k13[0]=temp;
		n++;
	}
	printf("\nthe cipher text is:");
	for(i=0;i<m;i++)
	{
		printf("%d", c[i]);
	}
	int k71[7]={1,1,0,1,0,1,0},k111[11]={1,1,0,1,0,1,0,1,0,1,0},k131[13]={1,1,0,1,0,1,0,1,0,1,0,1,1};
	n=0,l=0;
	while(n<m)
	{
		if(k131[12]==1)
		{
			p1[l++]=(c[n]+k71[6])%2;
			temp=(k71[0]+k71[6])%2;      
		    for(i=6;i>0;i--)     
			{
				k71[i]=k71[i-1];         
			}                    
			k71[0]=temp;
		}
		else
		{
			p1[l++]=(c[n]+k111[10])%2;
			temp=(k111[0]+k111[10])%2;      
		    for(i=10;i>0;i--)     
			{
				k111[i]=k111[i-1];         
			}                    
			k111[0]=temp;
		}
		temp=(k131[0]+k131[12])%2;      
		for(i=12;i>0;i--)     
		{
			k131[i]=k131[i-1];         
		}                    
		k131[0]=temp;
		n++;
	}
	for(i=0;i<m;i++)
	{
		if(p1[i] != p[i])
		flag1=1;
	}
	if(flag1==0)
	printf("\nplain text encrypted rightly !");
	
}
