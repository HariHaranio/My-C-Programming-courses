/*
    * BitwiseOperator.c
    *
    *  Created on: 2024-06-01
*/

#include <stdio.h>

int main() {
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    // Bitwise AND
    int andResult = a & b; // 0001 in binary, which is 1 in decimal
    printf("Bitwise AND of %d and %d is: %d\n", a, b, andResult);

    // Bitwise OR
    int orResult = a | b; // 0111 in binary, which is 7 in decimal
    printf("Bitwise OR of %d and %d is: %d\n", a, b, orResult);

    // Bitwise XOR
    int xorResult = a ^ b; // 0110 in binary, which is 6 in decimal
    printf("Bitwise XOR of %d and %d is: %d\n", a, b, xorResult);

    // Bitwise NOT
    int notResultA = ~a; // Inverts all bits of a
    int notResultB = ~b; // Inverts all bits of b
    printf("Bitwise NOT of %d is: %d\n", a, notResultA);
    printf("Bitwise NOT of %d is: %d\n", b, notResultB);

    // Bitwise Left Shift
    int leftShiftResult = a << 4; // Shifts bits of a to the left by 4 positions, resulting in 10100000 in binary, which is 160 in decimal
    printf("Bitwise Left Shift of %d by 4 is: %d\n",a, leftShiftResult);

    // Bitwise Right Shift
    int rightShiftResult = a >> 1; // Shifts bits of a to the right by 1 position, resulting in 0010 in binary, which is 2 in decimal
    printf("Bitwise Right Shift of %d by 1 is: %d\n",a, rightShiftResult);

    return 0;
}