//10. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.
#include<stdio.h>
int main()
{
    int num,positive=0,negative=0,zero=0,i=1;
    printf("Enter any five numbers: \n");
    for(i;i<=5;i++){
    printf("Enter number %d : ",i);
    scanf("%d",&num);
    if(num<0){
                negative++;
    }else if(num>0){
          positive++;
          }else {
                zero++;
                }
}
printf("\n\nPositive numbers  = %d\nNegative Numbers = %d\nZero = %d", positive,negative,zero);
getch();
    return 0;
}
