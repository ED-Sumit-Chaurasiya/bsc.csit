//16.Write a C program to print a number, its square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user. 
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter an positive integer : ");
    scanf("%d",&n);
    
    if(n>0)
    {
           for(i=1;i<=n;i++)
           {
                            printf("%d , Square = %d, Cube = %d \n ", i, i*i,i*i*i);
           }
    }else{
          printf("Invalid Inputs");
          }
          getch();
          return 0;
}
