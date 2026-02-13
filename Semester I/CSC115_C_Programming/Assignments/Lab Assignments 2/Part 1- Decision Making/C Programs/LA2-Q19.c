/*
19. Write a program in C to calculate and print the Electricity bill of a given customer. 
The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. 
Charges:
Unit        Charge/unit
up to 199   @1.20
200-399     @1.50
400-599     @1.80
600 above   @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
*/

#include <stdio.h>

int main()
{
    int custId, units;
    float chargePerUnit, bill, surcharge;
    char custName[50];
    
    printf("Enter customer ID: ");
    scanf("%d", &custId);
    printf("Enter customer name: ");
    scanf("%s", custName);
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    if (units <= 199)
        chargePerUnit = 1.20;
    else if (units <= 399)
        chargePerUnit = 1.50;
    else if (units <= 599)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;
    
    bill = units * chargePerUnit;
    
    if (bill > 400) {
        surcharge = bill * 0.15;
        bill += surcharge;
    }
    
    if (bill < 100)
        bill = 100;
    
    printf("\nCustomer ID: %d\n", custId);
    printf("Customer Name: %s\n", custName);
    printf("Total Bill: Rs. %.2f\n", bill);
    
    getch();
    return 0;
}
