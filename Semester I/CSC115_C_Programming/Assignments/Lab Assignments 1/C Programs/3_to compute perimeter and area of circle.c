//3.Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.�
#include<stdio.h>
#define pi 3.14
int main()
{
    float r = 6, peri, area;
    peri = 2*pi*r; area = pi*r*r;
    printf("The perimenter of circle is %f.\n", peri);
    printf("The area of circle is %f.", area);
    getch();
    return 0;
}
