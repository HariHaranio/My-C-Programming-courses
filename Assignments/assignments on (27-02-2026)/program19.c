#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check whether a number is:
/*
    Divisible by 5 and 11
    Divisible by only 5
    Divisible by only 11
    Not divisible by only 12
*/

int main()
{
    int getNumber;

    printf("Enter a number: ");
    scanf("%d", &getNumber);

    if (getNumber % 5 == 0 && getNumber % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", getNumber);
    } else if (getNumber % 5 == 0) {
        printf("%d is divisible by only 5.\n", getNumber);
    } else if (getNumber % 11 == 0) {
        printf("%d is divisible by only 11.\n", getNumber);
    } else if (getNumber % 12 != 0) {
        printf("%d is not divisible by 12.\n", getNumber);
    } else {
        printf("%d does not meet any of the specified conditions.\n", getNumber);
    }

    return 0;
}