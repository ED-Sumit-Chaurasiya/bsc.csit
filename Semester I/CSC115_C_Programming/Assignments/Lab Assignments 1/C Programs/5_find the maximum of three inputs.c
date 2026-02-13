//5. Write a C program that accepts three integers and find the maximum of three.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three integers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c){
                    printf("All three numbers are equal : %d",a);
    } else if (a>=b&&a>=c){
           printf("The maximum of three is %d",a);
    }else if (b>=a&&b>=c){
          printf("The maximun of three is %d",b);
    }else {
          printf("The maximun of three is %d",c);
    }
    getch();
    return 0;
}
