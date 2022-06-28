#include<stdio.h>
int main()
{
	int a[]={12, 3, 45, 6, 43, 2, 17, 23, 14, 54, 87, 35, 78, 98, 24};
	int i=0,j=0,temp=0,flag,count=0;
	int n = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++)
	{
		//flag=0;
		for(j=0;j<n-i-1;j++)
		{
			count++;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			
				
			}
		}
	}
	printf("sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t", a[i]);
	}
	printf("\n no of comparison done: %d", count);
}
