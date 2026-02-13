/*
3. Write a program in C to display n terms of natural numbers and their sum.
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Natural numbers: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    
    printf("\nSum: %d\n", sum);
    
    getch();
    return 0;
}
