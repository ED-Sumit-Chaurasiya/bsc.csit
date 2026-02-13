//11.Write a C program to check a given integer is positive even, negative even, positive odd or negative odd. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);
    if(num!=0){
               if(num>0){
                    if(num%2==0){
               printf("%d is positive even number.",num);
               }else{
               printf("%d is positive odd number.",num);
               }
               }else{
                     if(num%2==0){
                                   printf("%d is negative even number.",num);
               }else{
               printf("%d is negative odd number.",num);
                     }
                     }
    }
    getch();
    return 0;
}
