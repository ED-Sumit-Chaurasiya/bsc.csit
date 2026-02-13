/*
32. Write a program in C to display the number in reverse order.
*/

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Reverse: ");
    while (n > 0) {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");
    
    getch();
    return 0;
}
