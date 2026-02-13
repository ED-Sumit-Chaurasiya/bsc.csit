/*
26. Write a program in C to display the pattern like a diamond.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>

int main()
{
    int n, i, j, k;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Upper half
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
