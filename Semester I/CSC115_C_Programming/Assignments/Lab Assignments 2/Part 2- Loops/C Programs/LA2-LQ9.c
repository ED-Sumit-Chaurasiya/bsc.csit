/*
9. Write a program in C to display the pattern like a right angle triangle with a number.

1
12
123
1234
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
