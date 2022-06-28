#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int i;    
    /* It returns the same sequence of random number  
    on every execution of the program. */  
    printf(" Random Numbers are: \n");   
    for (i = 0; i <5; i++)  
    {  
        printf(" %d", rand()%2);  
     }   
     return 0;  
}
