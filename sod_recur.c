//sum of digits using recursion//
#include<stdio.h>
int digit_recu(int n)
{
    if(n==0)
    return 0;
    int d = n%10;
    return d + digit_recu(n/10);

}

void main()
{
     int n;
    printf("enter n :");
    scanf("%d",&n);
    printf("%d",digit_recu(n));

}

            
