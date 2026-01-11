#include <stdio.h>
int main() {
    int a = 5, b = 3;

    // Performs bitwise AND on a and b (0101 & 0011 = 0001 → 1)
    printf("Bitwise AND (a & b): %d\n", a & b);  

    // Performs bitwise OR on a and b (0101 | 0011 = 0111 → 7)
    printf("Bitwise OR (a | b): %d\n", a | b); 

    // Performs bitwise XOR on a and b (0101 ^ 0011 = 0110 → 6)
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b); 

    // Performs bitwise NOT on a (00000101 → 11111010, two’s complement = −6)
    printf("Bitwise NOT (~a): %d\n", ~a);

    // Shifts bits of a left by 1 (0101 << 1 = 1010 → 10)
    printf("Left Shift (a << 1): %d\n", a << 1);

    // Shifts bits of a right by 1 (0101 >> 1 = 0010 → 2)
    printf("Right Shift (a >> 1): %d\n", a >> 1); // 5 >> 1 = 2
    return 0;
}