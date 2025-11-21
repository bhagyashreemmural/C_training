// write a c function which will accept 1 input parameters r and returns the perimeters of circle declare pi as constants//
#include<stdio.h>
float perimeter(int r)
{
    const float pi = 3.14;
    float peri = 2*pi*r;
    return peri;

}
void main()
{
   
     int r = 6;
    printf("%f \n",perimeter(r));
     int r1 = 3;
    printf("%f \n",perimeter(r1));
     int r2 = 2;
    printf("%f \n",perimeter(r2));
}  

