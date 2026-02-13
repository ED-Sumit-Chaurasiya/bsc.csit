/*
34. Write a C Program to display the pattern like pyramid using the alphabet.  
        A
      A B A 
    A B C B A
  A B C D C B A
*/
#include <stdio.h>

int main()
{
    int n, i, j, k;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (k = 0; k < n - i; k++) {
            printf("  ");
        }
        
        // Print ascending letters
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        
        // Print descending letters
        for (j = i - 2; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        
        printf("\n");
    }
    
    getch();
    return 0;
}