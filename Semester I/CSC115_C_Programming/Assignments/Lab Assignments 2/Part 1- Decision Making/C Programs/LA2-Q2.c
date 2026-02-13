// 2.Write a C program to check whether a given number is even or odd.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is an even number.", num);
     else
        printf("%d is an odd number.", num);
    getch();
    return 0;
}
