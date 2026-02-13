/*
23. Write a C program to find the perfect numbers within a given number of range.
*/

#include <stdio.h>

int main()
{
    int start, end, n, i, sum;
    
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    
    printf("Perfect numbers: ");
    for (n = start; n <= end; n++) {
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            printf("%d ", n);
        }
    }
    printf("\n");
    
    getch();
    return 0;
}
