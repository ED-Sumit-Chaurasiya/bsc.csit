/*
4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
*/

#include <stdio.h>

int main()
{
    int i, num, sum = 0;
    float avg;
    
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    
    avg = (float)sum / 10;
    
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    
    getch();
    return 0;
}
