/*
2. Write a C program to find the sum of the first 10 natural numbers.
*/

#include <stdio.h>

int main()
{
    int i, sum = 0;
    
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    
    printf("Sum of first 10 natural numbers: %d\n", sum);
    
    getch();
    return 0;
}
