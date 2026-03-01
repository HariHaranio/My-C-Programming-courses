#include<stdio.h>
// assignment date :27 - 02 - 2026
// write a c program to check whether a number is even or odd.
// by using ternary operator.

int main(){
    int getNum;

    printf("Enter a number to check whether it is even or odd:");
    scanf("%d",&getNum);

    (getNum % 2 == 0) ? printf("\nGiven number '%d' is even",getNum) : printf("\nGiven number '%d' is odd",getNum);
    
    return 0;
}