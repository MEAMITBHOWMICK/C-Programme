/*3. Given two sets (x and y) of values. Find the correlation coefficient between x and y.*/

#include<stdio.h>
#include<math.h>
int main()
{
	float x[10] , y[10];
	int n ,m ;
	int i;
	float s1=0.0,s2=0.0,s3=0.0, x0,y0,p=0.0,q=0.0,r,corr=0.0;
	printf("enter the no of value in X(<9) :");
	scanf("%d" , &n);
	printf("enter the no of value in Y(<9) :");
	scanf("%d" , &m);
	printf("enter value for set X  : \n");
	for(i=1;i<=n;i++)
	{
		printf("enter a no:");
		scanf("%f" , &x[i]);
	}
	printf("enter value for set Y : \n ");
	for(i=1;i<=m;i++)
	{
		printf("enter a no:");
		scanf("%f" , &y[i]);
	}
	if(n==m)
	{
	for(i=1;i<=n;i++)
	{
		s1=s1+x[i];
	}
	x0=s1/n;
	for(i=1;i<=m;i++)
	{
		s2=s2+y[i];
	}
	y0=s2/m;
	for(i=1;i<=n;i++)
	{
		p=p+pow((x[i]-x0),2);
	}
	for(i=1;i<=m;i++)
	{
		q=q+pow((y[i]-y0),2);
	}
	r=pow(p*q, .5);
	for(i=1;i<=n;i++)
	{
		s3 =s3+(x0-x[i])*(y0-y[i]);
	}
	if(r !=0)
	{
	
	corr= s3/r;
	printf("correlation b/w X and Y : %f" , corr);
    }
    else
    {
    	printf("correlation is not defined !");
	}

    }
    else
    {
    	printf("correlation is not defined !");
	}
	
}
