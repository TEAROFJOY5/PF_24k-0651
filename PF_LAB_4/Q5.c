/*Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id., name and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the customer.
The charges are as follow:

Unit Charge/Unit
Up to 199 @16.20
200 and above but less than 300 @20.10
300 and above but less than 500 @27.10
500 and above @35.90
If the bill exceeds Rs. 18000 then a surcharge of 15% will be charged on top of the bill.


 */
#include <stdio.h>

int main() {
    int customerID, units;
    float totalBill, surcharge = 0.0, finalAmount;

    
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        totalBill = units * 16.20;
    } else if (units >= 200 && units < 300) {
        totalBill = units * 20.10;
    } else if (units >= 300 && units < 500) {
        totalBill = units * 27.10;
    } else {
        totalBill = units * 35.90;
    }

    // Apply surcharge if bill exceeds Rs. 18000
    if (totalBill > 18000) {
        surcharge = totalBill * 0.15; // 15% surcharge
    }

    // Final amount after surcharge
    finalAmount = totalBill + surcharge;

    // Display the bill
    printf("\nElectricity Bill:\n");
    printf("Customer ID       : %d\n", customerID);
    printf("Units Consumed    : %d\n", units);
    printf("Total Bill        : Rs. %.2f\n", totalBill);
    if (surcharge > 0) {
        printf("Surcharge (15%%)   : Rs. %.2f\n", surcharge);
    }
    printf("Final Amount to Pay: Rs. %.2f\n", finalAmount);

    return 0;
}
