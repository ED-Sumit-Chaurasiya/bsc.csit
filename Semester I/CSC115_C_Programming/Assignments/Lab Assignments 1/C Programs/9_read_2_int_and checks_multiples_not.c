//9.Write a C program that reads two integers and checks if they are multiples or not of each other.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any two numbers : ");
    scanf("%d %d",&num1,&num2);
    if (num1 == 0 || num2 == 0) {
        printf("Multiples involving zero are undefined.\n");
    } 
    else if (num1 % num2 == 0) {
        printf("%d is a multiple of %d. Thus, They are multiples.\n", num1, num2);
    } 
    else if (num2 % num1 == 0) {
        printf("%d is a multiple of %d. Thus, They are multiples.\n", num2, num1);
    } 
    else {
        printf("They are not multiples of each other.\n", num1, num2);
    }
    getch();
    return 0;
}
