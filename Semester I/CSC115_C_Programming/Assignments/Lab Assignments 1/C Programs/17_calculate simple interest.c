//17.Write a C program that accepts principle, rate of interest, time and compute the simple interest. 
#include<stdio.h>
int main()
{
float p,t,r,SI;
printf("Simple Interest Calculator :\n");
printf("Enter the Principle amounts : ");
scanf("%f",&p);
printf("Enter the rate of interest : ");
scanf("%f",&r);
printf("Enter the time : ");
scanf("%f",&t);
SI = (p*t*r)/100;
printf("The simple interest is %.2f.",SI);
getch();
return 0;
}
