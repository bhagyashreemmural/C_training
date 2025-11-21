#include<stdio.h>
#include<string.h>
void main ()
{
    char wow[40] = "We are wonder kids";
    char omg[20] = "wonder";
    if((strstr(wow,omg))!=NULL)
    printf("found");
    else
   printf("not found");
}
