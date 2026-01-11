#include <stdio.h>

int main() {
    int a = 1;
    int b = 10;

    // Using logical operator
    printf("\nReturns true if both the operands are true.\n");
    printf("a && b: %d\n", a && b); // Should print 1 (true);
    printf("\nReturns true if both or any of the operand is true.\n");
    printf("a || b: %d\n", a || b); // Should print 1 (true)
    printf("\nReturns true if the operand is false.\n");
    printf("!a: %d\n", !a);         // Should print 0

    return 0;
}