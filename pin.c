#include<stdio.h>
void main()
{
    int pin = 1234;
    int user_pin;
    printf("enter the user pin");
    scanf("%d",&user_pin);
    
    printf("pin :%d",pin == user_pin);
    
}
