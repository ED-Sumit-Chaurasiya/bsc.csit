/*
18. Write a C program to calculate profit and loss on a transaction.
*/

#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profitLoss;
    
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    
    profitLoss = sellingPrice - costPrice;
    
    if (profitLoss > 0)
        printf("Profit: Rs. %.2f\n", profitLoss);
    else if (profitLoss < 0)
        printf("Loss: Rs. %.2f\n", -profitLoss);
    else
        printf("No profit, no loss.\n");
    
    getch();
    return 0;
}
