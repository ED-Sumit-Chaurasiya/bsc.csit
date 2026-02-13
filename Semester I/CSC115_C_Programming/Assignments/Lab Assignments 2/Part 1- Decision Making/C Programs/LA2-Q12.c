/*
12. Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
*/

#include <stdio.h>

int main()
{
    int rollNo, marks1, marks2, marks3, total;
    float percentage;
    char name[50];
    
    printf("Enter roll number: ");
    scanf("%d", &rollNo);
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    
    total = marks1 + marks2 + marks3;
    percentage = (total / 300.0) * 100;
    
    printf("\nRoll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 60)
        printf("Division: First\n");
    else if (percentage >= 45)
        printf("Division: Second\n");
    else if (percentage >= 33)
        printf("Division: Third\n");
    else
        printf("Division: Fail\n");
    
    getch();
    return 0;
}
