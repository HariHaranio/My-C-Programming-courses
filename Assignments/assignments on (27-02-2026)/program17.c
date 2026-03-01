#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to display menu-driven program:
/*
    1 → Addition
    2 → Subtraction
    3 → Multiplication
    4 → Division
*/

int main()
{
    int getChoice;
    float getNum1, getNum2, result;

    printf("Menu:\n");
    printf("1 -> Addition\n");
    printf("2 -> Subtraction\n");
    printf("3 -> Multiplication\n");
    printf("4 -> Division\n");
    printf("5 -> Exit\n");
    printf("-------------------------\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &getChoice);

    if(getChoice >= 1 && getChoice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &getNum1, &getNum2);
    }

    switch(getChoice)
    {
        case 1:
            result = getNum1 + getNum2;
            printf("Result: %.2f + %.2f = %.2f\n", getNum1, getNum2, result);
            break;
        case 2:
            result = getNum1 - getNum2;
            printf("Result: %.2f - %.2f = %.2f\n", getNum1, getNum2, result);
            break;
        case 3:
            result = getNum1 * getNum2;
            printf("Result: %.2f * %.2f = %.2f\n", getNum1, getNum2, result);
            break;
        case 4:
            if(getNum2 != 0) {
                result = getNum1 / getNum2;
                printf("Result: %.2f / %.2f = %.2f\n", getNum1, getNum2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}