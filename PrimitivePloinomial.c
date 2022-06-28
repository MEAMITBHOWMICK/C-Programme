#include<stdio.h>
#include<math.h>
int b[100],s[100],c[100],n,l;
void d_to_b(int p)
{
    int i=n-1,j;
    while (p!=0) 
    {
      c[i]=p%2;
      p=p/2;
      i=i-1;
    }
    for(j=i;j>=0;j--)
    {
       c[j]=0;
    }
}
int b_to_d(int p[])
{
    int term=1,decimal=p[n-1],i;
    for(i=n-1;i>0;i--)
    {
        term=term*2;
        decimal=decimal+(p[i-1]*term);
    }
    return(decimal);
}

int lfsr(int s[], int c[])
{
    int sum=0,i,sum1=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(c[i]*s[i]);
    }
    for(i=n-1;i>0;i--)
    {
        s[i]=s[i-1];
    }
    s[0]=(sum % 2);
    return(b_to_d(s));
}
void main()
{
    int i,j,k=-1,term1=1,dec,period=0,flag=0;
    printf("Enter the degree of the LFSR :");
    scanf("%d",&n);
    printf("Enter the array 's'(initial seed of the lfsr) :\n");
    l=pow(2, n)-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    dec=b_to_d(s);
    for(i=1;i<l+1;i++)
    {
        d_to_b(i);
        if(c[n-1]==1)
        {
            while(k!=dec)
            {
                k=lfsr(s,c);
                period++;
            }
            if(period==l)
            {
            	flag++;
            	printf("%d. ",flag);
            	printf("%d+", 1);
                for(j=0;j<n-1;j++)
                {
                	if(c[j] !=0)
                    printf("X^%d+", j+1);
                }
                printf("X^%d", n);
                printf("\n");
            }
            k=-1;period=0;
        }
    }
}
