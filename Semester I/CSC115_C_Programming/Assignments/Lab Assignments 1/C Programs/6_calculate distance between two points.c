//6. Write a C program to calculate the distance between the two points (Cartesian).
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;
    printf("Enter the coordinate of fist point (x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinate of second point (x2,y2): ");
    scanf("%d %d",&x2,&y2);
    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("The distance between two point is %f.",distance);
    getch();
    return 0;
}
