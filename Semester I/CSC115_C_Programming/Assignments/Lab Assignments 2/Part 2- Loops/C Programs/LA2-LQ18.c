/*
18. Write a program in C to display the n terms of harmonic series and their sum.

1 + 1/2 + 1/3 + ... + 1/n
*/

#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Harmonic series: ");
    for (i = 1; i <= n; i++) {
        printf("1/%d ", i);
        if (i < n) printf("+ ");
        sum += 1.0 / i;
    }
    
    printf("\nSum: %.6f\n", sum);
    
    getch();
    return 0;
}
