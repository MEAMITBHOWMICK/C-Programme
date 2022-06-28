#include<stdio.h>
int count=0;
int partition(int *a, int start, int end)
{
	int pivot=a[end];
	int pi=start;
	int i,temp;
	for(i=start;i<end;i++)
	{
		count++;
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[pi];
			a[pi]=temp;
			pi++;
			
		}
		temp=0;
	}
	temp=a[pi];
	a[pi]=a[end];
	a[end]=temp;

	return pi;
}
void quicksort(int *a, int start, int end)
{
	if(start < end)
	{
		int partition_index=partition(a,start,end);
		quicksort(a,start, partition_index-1);
		quicksort(a,partition_index+1,end);
	}
}
int main()
{
	int i;
	int a[]={12, 3, 45, 6, 43, 2, 17, 23, 14, 54, 87, 35, 78, 98, 24};
    int n= sizeof(a)/sizeof(a[0]);
	printf("unsorted array: ");
	for(i=0;i<n;i++)
	{
	    printf("%d  ", a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nthe sorted Aarry: ");
	for(i=0;i<n;i++)
	printf("%d  ", a[i]);
	printf("\nno of comparison need: %d ", count);
}
