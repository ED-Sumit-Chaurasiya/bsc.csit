/*
21. Write a program in C to find the sum of the series 1 + 11 + 111 + 1111 + .. n terms.
*/

#include <stdio.h>

int main()
{
    int n, i, num, sum = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        num = 0;
        int j;
        for (j = 0; j < i; j++) {
            num = num * 10 + 1;
        }
        sum += num;
        printf("%d ", num);
    }
    
    printf("\nSum: %d\n", sum);
    
    getch();
    return 0;
}
