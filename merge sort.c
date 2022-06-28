#include<stdio.h>
int count=0;
void merge(int a[], int low, int mid, int high)
{
	int max;
	int temp[100]={0};
	int i=low;
	int k=low;
	int j=mid+1;
	while((i<=mid) && (j<=high))
	{
		count++;
		if(a[i]<a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=high)
	temp[k++]=a[j++];
	for(i=low;i<=high;i++)
	a[i]=temp[i];
}
void merge_sort(int a[], int low, int high)
{
	if(low < high)
	{
		int mid;
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
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
	merge_sort(a,0,n-1);
	i=0;
	printf("\nno of comparison need: %d ", count);
	printf("\nsorted array: ");
	for(i=0;i<=n-1;i++)
	printf("%d ",a[i]);
}
