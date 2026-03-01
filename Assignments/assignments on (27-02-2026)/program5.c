#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to find the maximum of two numbers.
// by using ternary operator.

int main(){
    int num1,num2;

    printf("Enter two numbers to find the maximum of two numbers:");
    scanf("%d %d",&num1,&num2);

    int max = (num1 > num2) ? num1 : num2;

    printf("\nMaximum of two numbers '%d' and '%d' is: %d",num1,num2,max);
    
    return 0;
}