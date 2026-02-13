/*
9. Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
*/

#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Enter the coordinate point (x, y): ");
    scanf("%d %d", &x, &y);
    
    if (x > 0 && y > 0)
        printf("The point lies in the 1st quadrant\n");
    else if (x < 0 && y > 0)
        printf("The point lies in the 2nd quadrant\n");
    else if (x < 0 && y < 0)
        printf("The point lies in the 3rd quadrant\n");
    else if (x > 0 && y < 0)
        printf("The point lies in the 4th quadrant\n");
    else if (x == 0 && y == 0)
        printf("The point lies at the origin\n");
    else if (x == 0)
        printf("The point lies on the Y-axis\n");
    else
        printf("The point lies on the X-axis\n");
    
    getch();
    return 0;
}
