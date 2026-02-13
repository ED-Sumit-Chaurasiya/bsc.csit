/*
17. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- ......... ].
*/

#include <stdio.h>

int main()
{
    int n, i;
    double x, sum = 1.0, term;
    long fact;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++) {
        fact = 1;
        int j;
        for (j = 1; j <= 2 * i; j++) {
            fact *= j;
        }
        term = 1.0;
        for (j = 0; j < 2 * i; j++) {
            term *= x;
        }
        if (i % 2 == 1) {
            sum -= term / fact;
        } else {
            sum += term / fact;
        }
    }
    
    printf("Sum: %.6f\n", sum);
    
    getch();
    return 0;
}
