#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p =  (int *)malloc(3* sizeof(int));
    p[0] = 55;
    p[1] = 45;
    p[2] = 86;
    p = (int *)realloc(p,5*sizeof(int));
    p[3] = 34;
    p[4] = 23;
    for(int i=0;i<5;i++)
    {
     printf("%d ",p[i]);
    }
     free(p);
} 
