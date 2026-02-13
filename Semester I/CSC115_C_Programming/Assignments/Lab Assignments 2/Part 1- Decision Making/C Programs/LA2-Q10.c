/*
10. Write a C program to find the eligibility of admission for a professional course based on the following criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=180
or
Total in Math and Subjects >=140
*/

#include <stdio.h>

int main()
{
    int maths, phy, chem, total;
    
    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);
    
    total = maths + phy + chem;
    
    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 180) || (maths + phy >= 140) || (maths + chem >=140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }
    
    getch();
    return 0;
}
