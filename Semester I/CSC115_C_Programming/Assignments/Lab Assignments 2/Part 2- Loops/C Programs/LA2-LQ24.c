/*
24. Write a C program to check whether a given number is an armstrong number or not.
*/

#include <stdio.h>

int main()
{
    int n, temp, sum = 0, digits = 0, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    
    getch();
    return 0;
}
