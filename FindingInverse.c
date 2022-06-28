#include<stdio.h>
int flag=0;
int extended(int n ,int m)
{
	int a0=n, b0=m, t0=0, t1=1, q=a0/b0, r=a0-q*b0, temp;
	while(r>0)
	{
		temp=(t0-q*t1)%n;
		if(temp<0)
		{
			temp=temp+n;
		}
		t0=t1;
		t1=temp;
		a0=b0;
		b0=r;
		q=a0/b0;
	    r=a0-q*b0;
	}
	if(b0!=1)
	{
		printf("b has no inverse in mod a\n");
		flag++;
		return ; 
	}
	else
	return t1;
	
}
int main()
{
	int a,b,e;
	printf("Enter the number you want to find inverse ");
    scanf("%d",&b);
    printf("Enter the modulo ");
    scanf("%d",&a);
    e=extended(a,b);
    if(flag==0)
    printf("inverse of b in mod a is :%d", e);
}

