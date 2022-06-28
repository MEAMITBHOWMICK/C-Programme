#include<stdio.h>
#include<math.h>
void swap (int *a, int *b)
{
	int x=*a;
	*a=*b;
	*b=x;
}
int main()
{
	int s[256],k[16],z1[65536], z2[65536];
	int a[256]={0}, b[256]={0};
	int i,j,m=0,p=0,n;
	int flag1=0, flag2=0;
	for(i=0;i<256;i++)
	{
		s[i]=i;
		//printf("%d ", s[i]=i);
	}
	for(n=0;n<65536;n++)
	{
		for(i=0;i<16;i++)
		{
			k[i]=rand()%256;
		}
		j=0;
		for(i=0;i<256;i++)
		{
			j=(j+s[i]+k[i%16])%256;
			swap(&s[i], &s[j]);
		}
		i=0,j=0;
		int r=1;
		while(r--)
		{
			i=(i+1)%256;
			j=(j+s[i])%256;
			swap(&s[i], &s[j]);
			z1[m++]=s[(s[i]+s[j])%256];
		}
		r=1;
		while(r--)
		{
			i=(i+1)%256;
			j=(j+s[i])%256;
			swap(&s[i], &s[j]);
			z2[p++]=s[(s[i]+s[j])%256];
		}
	}
	/*for(i=0;i<65536;i++)
	{
		printf("\n%d %d ", z1[i], z2[i]);
	}*/
	for(i=0;i<65536;i++)
	{
		a[z1[i]]++;
		b[z2[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if((a[i]/65536)>(1.50/256) || (a[i]/65536)<(.50/256) )
		{
			flag1=1;
		}
		if((b[i]/65536)>(1.50/256) || (b[i]/65536)<(.50/256) )
		{
			flag2=1;
		}
	}
	if(flag1==1)
	printf("\nz1 is biased");
	if(flag1==0)
	printf("\nz1 is unbaised");
	if(flag2==1)
	printf("\nz2 is biased");
	if(flag2==0)
	printf("\nz2 is unbaised");
}
