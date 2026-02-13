/*
10. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

1
22
333
4444
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
