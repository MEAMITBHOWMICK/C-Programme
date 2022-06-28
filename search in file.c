#include<stdio.h>  
#include<stdlib.h> 
int main() 
{ 
  FILE *f; 
  f=fopen("search.txt","w+"); 
  int n, i, flag = 0, x;
  int a[10] = {0}; 
  printf("enter no of numbers and x:"); 
  scanf("%d %d", &n , &x); 
  printf("enter the numbers: "); 
  for(i=0;i<n;i++) 
  { 
    scanf("%d",&a[i]); 
    fprintf(f,"%d ", a[i]); 
  } 
 
  for(i=0;i<n;i++) 
  { 
    fscanf(f,"%d", &a[i]); 
  } 
  for(i=0;i<n;i++) 
  { 
    if(a[i] == x) 
    { 
        flag = 1; 
        break; 
    } 
  } 
  if(flag == 1) 
    fprintf(f,"\n %d is present in the array.", x); 
  else 
    fprintf(f,"\n %d is NOT present in the array.", x); 
  fclose(f); 
}
