//create a structure with three variables name of the car , maximum spped,and price store this array of stuctures and display them//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char car[100];
    float speed;
    float price;
};
void main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    struct car c[2];
    for(int i = 0;i < n;i++)
    {
        printf("enter name of car :");
        scanf("%s",c[i].car);
        printf("enter the speed :");
        scanf("%f",&c[i].speed);
        printf("enter the price  :");
        scanf("%f",&c[i].price);
    }

}















