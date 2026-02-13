/*
31. Write a program in C to display the such a pattern for n number of rows 
using a number which will start with the number 1 and the first and a last number
of each row will be 1. 

  1
 121
12321
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j <= i) {
                printf("%d", j);
            } else {
                printf("%d", 2 * i - j);
            }
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
