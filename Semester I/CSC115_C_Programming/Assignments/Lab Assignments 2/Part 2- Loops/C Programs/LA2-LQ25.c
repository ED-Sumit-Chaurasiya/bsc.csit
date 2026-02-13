/*
25. Write a C program to find the Armstrong number for a given range of numbers.
*/

#include <stdio.h>

int main()
{
    int start, end, n, temp, sum, digits, i, j;
    
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    
    printf("Armstrong numbers: ");
    for (n = start; n <= end; n++) {
        temp = n;
        digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        
        sum = 0;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (j = 0; j < digits; j++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        
        if (sum == n) {
            printf("%d ", n);
        }
    }
    printf("\n");
    
    getch();
    return 0;
}
