#include<stdio.h>
void main()
{
    int t;
    int sale = 0;
int Q[3] = {3,4,10};
int C[3] = {4,6,1};

for(int i = 0; i<3; i++)
{
    int total = Q[i] * C[i];
     sale = sale + total;
}
 printf("total sale is  %d",sale);
}
