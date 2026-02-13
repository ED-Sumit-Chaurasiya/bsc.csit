/*
15. Write a program in C to display the n terms of even natural numbers and their sum.
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Even natural numbers: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            sum += i;
        }
    }
    
    printf("\nSum: %d\n", sum);
    
    getch();
    return 0;
}
