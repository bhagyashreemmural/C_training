#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = ( float *)calloc(5,sizeof(float));
    p[0] = 55.35;
    p[1] = 45.65;
    p[2] = 86.64;
    p[3] = 64.29;
    p[4] = 99.56;
    printf("%f",p[4]);
    free(p);
    
} 
