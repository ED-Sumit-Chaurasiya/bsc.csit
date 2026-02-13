//15.Write a program that reads two numbers and divide the first number by second number. If the division not possible print "Division not possible". 
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any two numbers : ");
    scanf("%d %d", &num1, &num2);
    if(num2==0){         
    printf("Division not Possible.");
    }else{
          printf("Division Possible.");
    }
    getch();
    return 0;
}
