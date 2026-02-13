/*
35. Write a program in C to convert a decimal number into binary without using an array.
*/

#include <stdio.h>

int main()
{
    int n,i,j;
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    printf("Binary: ");
    if (n == 0) {
        printf("0\n");
    } else {
        int binary[32];
        i = 0;
        while (n > 0) {
            binary[i] = n % 2;
            n /= 2;
            i++;
        }
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
