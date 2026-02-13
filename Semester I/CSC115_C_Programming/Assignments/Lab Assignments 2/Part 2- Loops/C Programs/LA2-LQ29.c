/*
29. Write a program in C to find the prime numbers within a range of numbers.
*/

#include <stdio.h>

int main()
{
    int start, end, n, i, isPrime;
    
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers: ");
    for (n = start; n <= end; n++) {
        isPrime = 1;
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && n >= 2) {
            printf("%d ", n);
        }
    }
    printf("\n");
    
    getch();
    return 0;
}
