#include<stdio.h>
int main()
{
	int a[]={12, 3, 45, 6, 43, 2, 17, 23, 14, 54, 87, 35, 78, 98, 24};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0,j=0,temp=0,hole=0,count=0;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		hole=i;
		while(hole>0 && a[hole-1]>temp)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
			count++;
		}
		
		a[hole]=temp;
	}
	printf("sorted array is: \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t", a[i]);
	}
	printf("\n no of comparison done: %d", count);
}
