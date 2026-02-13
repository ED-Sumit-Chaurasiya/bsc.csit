//14.Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates x and y : ");
    scanf("%d %d",&x,&y);
    if(x>0){
           if(y>0)
           printf("(%d,%d) lies in First Quadrant.",x,y);
           else
           printf("(%d,%d) lies in Fourth Quadrant.",x,y);
    }else if(x<0){
          if(y>0)
          printf("(%d,%d) lies in Second Quadrant.",x,y);
          else
          printf("(%d,%d) lies in third Quadrant.",x,y);
    }else{
         printf("(%d,%d) lies either x-axis,y-axis or origin.",x,y);
    }
getch();
return 0;

}
