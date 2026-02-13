/*
33. Write a program in C to check whether a number is a palindrome or not.
*/

#include <stdio.h>

int main()
{
    int n, temp, reverse = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    if (n == reverse) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    getch();
    return 0;
}
