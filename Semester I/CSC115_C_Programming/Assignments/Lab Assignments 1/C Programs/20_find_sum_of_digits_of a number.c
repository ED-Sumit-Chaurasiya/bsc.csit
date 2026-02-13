//20. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
#include<stdio.h>
int main()
{
    int num,orgnum,rmd,sum=0;;
    printf("Enter the positive number less that 500 : ");
    scanf("%d",&num);
    orgnum=num;
    while (num>0){
    rmd = num%10;
    sum = sum + rmd;
    num = num/10;
    }
    printf("The sum of digits of %d is %d.",orgnum,sum);
    getch();
    return 0;
}
