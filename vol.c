#include<stdio.h>
int volume(int l,int b,int h)
{
    int vol = l*b*h;
    return vol;
}
void main()
{
    int l = 2;
    int b = 6;
    int h = 4;
    printf("%d",volume(l,b,h));
}













