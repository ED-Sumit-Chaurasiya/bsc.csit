// 1.Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>
int main()
{
       int num1, num2;
       printf("Enter any two integers below : \n");
       printf("Enter the first integer : ");
       scanf("%d", &num1);
       printf("Enter the second integer : ");
       scanf("%d", &num2);
       if (num1 == num2)
       {
              printf("%d and %d are equal.", num1, num2);
       }
       else
       {
              printf("%d and %d are not equal.", num1, num2);
       }
       getch();
       return 0;
}
