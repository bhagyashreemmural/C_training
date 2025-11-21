#include<stdio.h>
int myadd(int x, int y)
{
    int sum =(x*x)+ (y*y);
    return sum;
}
void main()
{
    int x= 4;
    int y = 2;
    printf("%d\n",myadd(x,y));
   
}
