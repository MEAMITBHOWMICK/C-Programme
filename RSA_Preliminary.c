#include<stdio.h>
int add(int a, int b)
{
    int c;
    while(a!=0)
    {
        c=a&b;
        b=b^a;
        a=c<<1;
    }
    return(b);
}
int multiplication(int a, int b)
{
	int mul, i=0;
	if(a>=0)
    {
        for(i=0;i<a;i++)
        {
            mul=add(mul,b);
        }
    }
    else
    {
        for(i=a;i<0;i++)
        {
            mul=add(mul,b);
        }
        mul=mul*(-1);
    }
    return mul;
}
int gcd(int a, int b)
{
    if(b%a==0)
       return(a);
    else
       gcd(b%a,a);
}
int extended(int b, int m)
{
    int a1=1,a2=0,a3=m,b1=0,b2=1,b3=b,q,t1,t2,t3;
    while(1)
    {
    if(b3==0)
        return(0);
    if(b3==1)
    {
        if(b2<0)
        {
            b2=b2+m;
        }
        return(b2);
    }
      q=a3/b3;
      t1=a1-(q*b1);t2=a2-(q*b2);t3=a3-(q*b3);
      a1=b1;a2=b2;a3=b3;
      b1=t1;b2=t2;b3=t3;
    }
}
void main()
{
    int a,b,c,mul=0,i,g,e;
    printf("Enter the two number a and b\n");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("\nSum of two element is %d",c);
    mul=multiplication(a,b);
    printf("\nMultiplication of two number is %d",mul);
    printf("\n now i find the g.c.d between a and b\n");
    if(a>=b)
       g=gcd(b,a);
    else
       g=gcd(a,b);
    printf("\ng.c.d of given two number is %d",g);
    e=extended(a,b);
    if(a==0)
       printf("\nInverse does not exist");
    else
       printf("\nInverse of an element is %d",e);
}
