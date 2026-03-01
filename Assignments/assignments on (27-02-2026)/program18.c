#include<stdio.h>
// assignment date :27 - 02 - 2026
//  Write a C program to calculate electricity bill based on units:
/*
    ≤100 → ₹2/unit
    101–200 → ₹3/unit
    200 → ₹5/unit
*/

int main()
{
    int getUnits;
    float getBillAmount;

    printf("Enter the number of units consumed: ");
    scanf("%d", &getUnits);
    if (getUnits <= 100) {
        getBillAmount = getUnits * 2.0;
    } else if (getUnits <= 200) {
        getBillAmount = (100 * 2.0) + ((getUnits - 100) * 3.0);
    } else {
        getBillAmount = (100 * 2.0) + (100 * 3.0) + ((getUnits - 200) * 5.0);
    }

    printf("The electricity bill amount is: ₹%.2f\n", getBillAmount);

    return 0;
}