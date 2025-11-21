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
  
s1.age = 19;
 s1.marks = 88.4;
 strcpy(s1.name,"Bhagyashree");


    struct student s2;
  
s2.age = 24;
 s2.marks = 92.7;
 strcpy(s2.name,"Vijay");

 struct student s3 = {"Saffron" ,20, 99.9};

printf("%s ",s2.name);
printf("%d ",s2.age);
printf("%f",s2.marks);
}
