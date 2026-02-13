/*
27. Write a C program to determine whether a given number is prime or not.
*/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
    }
    
    printf("%d is a prime number.\n", n);
    
    getch();
    return 0;
}
