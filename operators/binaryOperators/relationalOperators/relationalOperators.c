#include <stdio.h>

int main() {
    int a = 25, b = 5;

    // using operators and printing results
    printf("Relational Operators:\n");

    printf("1.Equal to operator (==)\n"); 
    printf("%d == %d: %d\n", a, b, a == b);
    printf("\n");

    printf("2.Not equal to operator (!=)\n");
    printf("%d != %d : %d\n", a, b, a != b);
    printf("\n");

    printf("3.Greater than operator (>)\n");
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("\n");

    printf("4.Less than operator (<)\n");
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("\n");

    printf("5.Less than or equal to operator (<=)\n");
    printf("%d <= %d: %d\n", a, b, a <= b);
    printf("\n");

    printf("6.Greater than or equal to operator (>=)\n");
    printf("%d >= %d: %d\n", a, b, a >= b);
    
    return 0;
}