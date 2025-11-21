//sum of digits//
#include<stdio.h>
int sdigit(int n)
{
    int digit,result = 0;
    while(n!=0)
    {
        digit = n%10;
        result = result+digit;
        n=n/10;
    }
    return result;
}
void main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    printf("%d",sdigit(n));

}
     
