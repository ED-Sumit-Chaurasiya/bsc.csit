/*
19. Write a program in C to print the Floyd's Triangle.

1
01
101
0101
10101
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", (j + i) % 2);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
