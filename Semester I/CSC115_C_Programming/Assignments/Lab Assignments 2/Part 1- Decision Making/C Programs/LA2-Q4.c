// 4.Write a C program to find whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
      int days;
      printf("Enter the total no. of days in the year : ");
      scanf("%d", &days);
      if (days == 366)
            printf("This is a leap year.");
      else if (days == 365)
            printf("This is not a leap year.");
      else
            printf("Enter the valid days of a year.");
      getch();
      return 0;
}
