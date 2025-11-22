#include<stdio.h>
struct score
{
float marks;
int rank;
};
void edit(struct score *s1)
{
    printf("before change in function :%f\n",s1->marks);
    s1-> marks = 78.6;
    printf("after change in function :%f\n",s1->marks);
    
}
void main()
{
struct score s1 ={97.7,3};
edit(&s1);
printf("after change in main :%f",s1.marks);
}
