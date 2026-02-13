#include<stdio.h>
int main() 
{
    int i;
    printf("All even numbers between 1 and 50 : ");
    for(i=2;i<50;i=i+2)
    {
                       printf("%d ",i);
    }
    getch();
    return 0;
}
