//12.Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the divisor: ");
    scanf("%d", &n);
    if (n <= 3) {
        printf("Divisor must be greater than 3.\n");
        return 0;
    }
    printf("Numbers between 1 and 100 that give remainder 3 when divided by %d:\n", n);
    for (i = 1; i <= 100; i++) {
        if (i % n == 3) {
            printf("%d ", i);
        }
    }
    getch();
    return 0;
}
