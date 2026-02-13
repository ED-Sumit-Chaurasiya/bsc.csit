//7. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
    int seconds, mm,hh,ss;
    printf("Enter any integer (in seconds) :");
    scanf("%d",&ss);
    seconds=ss;
    hh=ss/3600;
    mm=(ss-hh*3600)/60;
    ss=ss%60;
    printf("The time %d seconds = %d hours, %d minutes and %d seconds ",seconds,hh,mm,ss);
    getch();
    return 0;
}
