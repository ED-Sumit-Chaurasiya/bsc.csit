/*
30. Write a program in C to display the first n terms of Fibonacci series.
*/

#include <stdio.h>

int main()
{
    int n, i;
    long a = 0, b = 1, c;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%ld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    
    getch();
    return 0;
}
