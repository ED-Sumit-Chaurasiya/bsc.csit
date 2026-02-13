/*
7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height.
*/

#include <stdio.h>

int main()
{
    float height;
    
    printf("Enter the height of a person in centimeter: ");
    scanf("%f", &height);
    
    if (height < 100)
        printf("Dwarf\n");
    else if (height >= 100 && height < 150)
        printf("Very Short\n");
    else if (height >= 150 && height < 170)
        printf("Short\n");
    else if (height >= 170 && height < 190)
        printf("Average\n");
    else if (height >= 190 && height < 210)
        printf("Tall\n");
    else
        printf("Very Tall\n");
    
    getch();
    return 0;
}
