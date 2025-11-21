//structure for name of book , author name,year//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
char book[100];
char author[100];
int year;
};
void main()
{
  int n;
  printf("enter n :");
  scanf("%d",&n);
  struct book b[3];
  for(int i = 0; i < n; i++)
  {
 printf("enter book :");
 scanf("%s",b[i].book);
 printf("enter the author :");
 scanf("%s",b[i].author);
 printf("enter the year of publications :");
 scanf("%d",&b[i].year);
}

printf("your information :");
for(int i = 0; i < n; i++)
{
printf("%s\n",b[i].book);
printf("%s\n",b[i].author);
printf("%d\n",b[i].year);
}
}
