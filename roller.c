#include<stdio.h>
void main()
{
    int age;
    float height;
    printf("enter the age :");
    scanf("%d",&age);
    printf("enter the heigth :");
    scanf("%f",&height);
    if(age > 12 && height > 4.5)
    {
        printf("the person is eligible to ride a roller coaster");
    }
else
{
    printf("the person is  not eligible to ride a roller coaster");
 }

} 
