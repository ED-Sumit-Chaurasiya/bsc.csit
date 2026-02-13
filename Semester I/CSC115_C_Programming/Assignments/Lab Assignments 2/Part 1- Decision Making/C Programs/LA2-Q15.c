/*
15. Write a C program to check whether a triangle can be formed by the given value for the angles.
*/

#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;
    
    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    sum = angle1 + angle2 + angle3;
    
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("The angles form a valid triangle.\n");
    else
        printf("The angles do not form a valid triangle.\n");
    
    getch();
    return 0;
}
