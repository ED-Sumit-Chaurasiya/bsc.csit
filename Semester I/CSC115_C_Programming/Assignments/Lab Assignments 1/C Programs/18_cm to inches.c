//18. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
#include<stdio.h>
int main()
{
float cm,inches;
printf("Enter the distance (in cm) : ");
scanf("%f",&cm);
inches = cm / 2.54;
printf("%.2f centimeters = %f inches",cm,inches);
getch();
return 0;    
}
