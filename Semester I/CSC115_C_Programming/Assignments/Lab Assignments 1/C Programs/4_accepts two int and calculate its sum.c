//4. Write a C program that accepts two integers from the user and calculate the sum of the two integers.
#include<stdio.h>
int main()
{
    int a,b, sum;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("The sum of %d and %d is %d.",a,b,sum);
    getch();
    return 0;
}
