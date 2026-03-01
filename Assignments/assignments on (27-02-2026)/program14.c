#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to create a simple calculator using switch case.
int main()
{
    char getOperator;
    double getNum1, getNum2;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &getOperator);
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &getNum1, &getNum2);
    
    switch(getOperator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", getNum1, getNum2, getNum1 + getNum2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", getNum1, getNum2, getNum1 - getNum2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", getNum1, getNum2, getNum1 * getNum2);
            break;
        case '/':
            if (getNum2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", getNum1, getNum2, getNum1 / getNum2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}