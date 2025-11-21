#include<stdio.h>
#include<string.h>
void main()
{
    //create
    char name[20] = "BHAGYASHREE_M_MURAL";
    char new[10] = "NAMASTE";
    //acess
    printf("%c \n",name[0]);
    //length
    printf("length of the string %d\n",strlen(name));
    //concatenation
    strcat(new,name);
    printf("%s",new);

    printf("%d",strstr(new,"NAMASTE"));
    printf("found");
}
