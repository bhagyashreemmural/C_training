#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
struct student s1;
struct student *p = &s1;
strcpy(p->name,"BUJJI");
p -> age = 19;
p -> marks = 80;
printf("name is :%s\n",p -> name); 
printf("age is :%d\n",p -> age);
printf("marks is :%f",p -> marks);
}
