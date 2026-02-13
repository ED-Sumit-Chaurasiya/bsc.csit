/*
14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
    
    getch();
    return 0;
}
