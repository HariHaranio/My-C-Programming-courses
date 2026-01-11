#include <stdio.h>

int main() {
    unsigned int a = 10; 
    unsigned int b = 5;

    printf("\n1.Simple Assignment:\n");
    a = b;
    printf("a = %u\n", a);

    printf("\n2.Plus and assign:\n");
    a += b;
    printf("a = %u\n", a);

    printf("\n3.Minus and assign:\n");
    a -= b;
    printf("a = %u\n", a);

    printf("\n4.Multiply and assign:\n");
    a *= b;
    printf("a = %u\n", a);

    printf("\n5.Divide and assign:\n");
    a /= b;
    printf("a = %u\n", a);

    printf("\n6.Modulus and assign:\n");
    a %= b;
    printf("a = %u\n", a);

    printf("7.AND and assign:\n");
    a &= b;
    printf("a = %u\n", a);

    printf("\n8.OR and assign:\n");
    a |= b;
    printf("a = %u\n", a);

    printf("\n9.XOR and assign:\n");
    a ^= b;
    printf("a = %u\n", a);

    printf("\n10.Left shift and assign:\n");
    a <<= 1;
    printf("a = %u\n", a);

    printf("\n11.Right shift and assign:\n");
    a >>= 1;
    printf("a = %u\n", a);

    return 0;
}