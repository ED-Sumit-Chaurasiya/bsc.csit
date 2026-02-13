/*
7. Write a program in C to display the multiplication table vertically from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("%d: ", i);
        for (j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
