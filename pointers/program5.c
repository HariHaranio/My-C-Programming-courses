#include<stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;

    // Swapping values using pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    return 0;
}