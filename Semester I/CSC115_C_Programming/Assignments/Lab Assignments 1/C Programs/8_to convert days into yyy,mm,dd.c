//8.Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
#include<stdio.h>
int main()
{
    int days,dd,mm,yyyy;
    printf("Enter the days in integers : ");
    scanf("%d",&dd);
    days = dd;
    yyyy = days/365;
    mm = (dd%365)/30;
    dd = (dd%365)%30;
    printf("%d days = %d years, %d months and %d days", days,yyyy,mm,dd);
    getch();
    return 0;
}
