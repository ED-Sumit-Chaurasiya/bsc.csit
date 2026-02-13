/*
20. Write a program in C to display the n terms of square natural numbers and their sum.
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Square natural numbers: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
        sum += i * i;
    }
    
    printf("\nSum: %d\n", sum);
    
    getch();
    return 0;
}
