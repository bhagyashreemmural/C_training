#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = ( int *)malloc(5*sizeof(int));
    p[0] = 55;
    p[1] = 45;
    p[2] = 86;
    p[3] = 64;
    p[4] = 99;
    printf("%d ",p[0]);
    free(p);
    
} 
