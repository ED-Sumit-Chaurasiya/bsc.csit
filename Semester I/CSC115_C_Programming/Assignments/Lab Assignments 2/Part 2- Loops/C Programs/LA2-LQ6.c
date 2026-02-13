/*
6. Write a program in C to display the multiplication table of a given integer.
*/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    getch();
    return 0;
}
