/*
1. Write a program in C to display the first 10 natural numbers.
*/

#include <stdio.h>

int main()
{
    int i;
    
    printf("First 10 natural numbers:\n");
    
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    
    getch();
    return 0;
}
