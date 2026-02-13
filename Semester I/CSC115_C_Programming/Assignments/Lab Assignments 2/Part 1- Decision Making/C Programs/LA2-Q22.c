/*
22. Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shapes.
*/

#include <stdio.h>

int main()
{
    int choice;
    float area, length, breadth, radius, side, base, height;
    
    printf("\n=== Area Calculation Menu ===");
    printf("\n1. Area of Rectangle\n");
    printf("2. Area of Circle\n");
    printf("3. Area of Square\n");
    printf("4. Area of Triangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2f\n", area);
            break;
        case 2:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle: %.2f\n", area);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square: %.2f\n", area);
            break;
        case 4:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
    }
    
    getch();
    return 0;
}
