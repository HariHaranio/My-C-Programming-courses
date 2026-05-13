/*
Write a C program to swap two numbers using pointers and a user-defined function.
*/

#include <stdio.h>

void swap(int *a, int *b);

int main() {

    int a = 1;
    int b = 2;

    printf("Before swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}