#include<stdio.h>
#include<stdlib.h>
int BSearch(int a[], int n, int x)
{
	int lb=0, ub=n-1;
	while(lb < ub)
	{
		int mid=(lb+ub)/2;
		if(x<a[mid])
		{
			ub=mid-1;
		}
		else if(x>a[mid])
		{
			lb=mid+1;
		}
		else
		{
			return mid;
		    break;
		}

	}
	return -1;
}
int main()
{
	FILE *f;
	f=fopen("BinarySearch.txt", "w+");
	int a[10]={1,12,45,56,59,69,78,81,90,98};
	int i,x,temp;
	for(i=0;i<10;i++)
	{
		fprintf(f, "%d ", a[i]);
	}
	printf("eleemet you want to search: ");
	scanf("%d", &x);
	temp= BSearch(a,10,x);
	if(temp==-1)
	{
		fprintf(f, "\n %d  not found", x);
	}
	else
	{
		fprintf(f , "\n  found in %d th place", temp);
	}
}
