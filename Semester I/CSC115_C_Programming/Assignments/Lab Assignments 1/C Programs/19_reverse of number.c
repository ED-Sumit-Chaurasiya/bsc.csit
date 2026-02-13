//19.Write a C program to reverse and print a given number.
#include<stdio.h>
int main()
{
    int num,orgnum,revnum=0;
    printf("Enter any number you want to reverse : ");
    scanf("%d",&num);
    orgnum = num;
    while (num>0)
    {
                revnum = revnum * 10 + num%10;
                num /= 10;
    }
    printf("The reverse of entered number is %d.",revnum);
    getch();
    return 0;
}
