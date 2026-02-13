//2. Write a C program to compute the perimeter and area of a rectangle with a length of 7 inches and width of 5 inches. 
#include<stdio.h>
int main()
{
    int l= 8, b= 5, peri, area; peri = 2*(l+b); area = l*b;
    printf("The perimeter of rectangle is %d.\n", peri);
    printf("The area of rectangle is %d.", area);
    getch();
    return 0;
}
