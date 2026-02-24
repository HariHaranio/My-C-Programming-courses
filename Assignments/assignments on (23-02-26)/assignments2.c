#include<stdio.h>
// assignment date :23 - 02 - 2026
// this program is to swap two numbers without using a third variable
// by using arithmetic operations


int main(){
    int a = 5, b = 4;
    printf("Before swapping a = %d & b = %d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping a = %d & b = %d\n",a,b);

    return 0;
}