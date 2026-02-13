/*
28. Write a C Program to display Pascal's triangle.
        1
      1   1 
    1   2   1 
  1   3   3   1
1   4   6   4   1 
*/

#include <stdio.h>

int main()
{
    int n, i, j, k, coeff;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        // Print spaces for alignment
        for (k = 0; k < n - i - 1; k++) {
            printf("  ");
        }
        
        for (j = 0; j <= i; j++) {
            if (j == 0) {
                coeff = 1;
            } else {
                coeff = coeff * (i - j + 1) / j;
            }
            printf("%d   ", coeff);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
