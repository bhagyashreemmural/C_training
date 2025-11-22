//write a c program which add two numbers and call it by reference//
#include<stdio.h>
void sum_ref(int *a,int *b)
{
    int sum = *a + *b;
    printf("%d",sum);

}
void main()
{
    int a = 4;
    int b = 5;
    int c = 3;
    sum_ref(&a,&b);
}
