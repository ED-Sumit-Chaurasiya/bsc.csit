//  5.Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include <stdio.h>
int main()
{
      int age;
      printf("Enter the age of an candidate : ");
      scanf("%d", &age);
      if (age >= 18)
            printf("The candidate is eligible for casting vote.");
      else if (age > 0)
            printf("The candidate is not eligible for casting vote.");
      else
            printf("Enter the valid age of candidate.");
      getch();
      return 0;
}
