//21.Write a C program that reads an integer between 1 and 12 and print the month of the year in English.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer between you want to know the corresponding english month of that number : ");
    scanf("%d",&num);
    printf("The number %d corresponds to the month of ",num);
    switch(num){
                case 1 : printf("January"); break;
                case 2 : printf("February"); break;
                case 3 : printf("March"); break;
                case 4 : printf("April"); break;
                case 5 : printf("May"); break;
                case 6 : printf("June"); break;
                case 7 : printf("July"); break;
                case 8 : printf("August"); break;
                case 9 : printf("September"); break;
                case 10 : printf("October"); break;
                case 11 : printf("November"); break;
                case 12 : printf("December"); break;
                default : printf("The entered number is invalid.");
    }
    getch();
    return 0;
}
