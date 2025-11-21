#include<stdio.h>
void main()
{
int arr[4] = {45,56,79,90};
int *p = arr;
printf("%d \n",*p);
printf("%d \n",*(p+1));
}
