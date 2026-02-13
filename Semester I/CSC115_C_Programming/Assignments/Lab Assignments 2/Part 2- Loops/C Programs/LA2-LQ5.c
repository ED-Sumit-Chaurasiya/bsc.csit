/*
5. Write a program in C to display the cube of the number up to given integer.
*/

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }
    
    getch();
    return 0;
}
