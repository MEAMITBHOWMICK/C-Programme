#include<stdio.h>
int main()
{
	int a[]={12, 3, 45, 6, 43, 2, 17, 23, 14, 54, 87, 35, 78, 98, 24};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0,j=0,temp=0,min=0,count=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			//count++;
			if(a[j] < a[min])
			{
				min=j;
			}
			count++;
		}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
    printf("sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t", a[i]);
	}
	printf("\n no of comparison done: %d", count);
}
