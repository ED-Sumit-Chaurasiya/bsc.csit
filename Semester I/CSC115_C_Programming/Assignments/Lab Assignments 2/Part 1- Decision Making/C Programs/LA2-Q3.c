// 3.Write a C program to check whether a given number is positive or negative.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is a positive number.", num);
    else if (num < 0)
        printf("%d is a negative number.", num);
    else
        printf("The number is zero which is neither positive nor negative.");
    getch();
    return 0;
}
