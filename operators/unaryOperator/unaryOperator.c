#include <stdio.h>
#include <stdbool.h>

// this example demonstrates a unary operator function in C

int main() {
    int x = 5;
    int y = 10;
    int z;

    // Unary minus operator
    z = x + (-y); 
    printf("\nResult of x + (-y): %d\n", z); 

    // increment operator in postfix form
    y = x++;
    printf("\nValue of y after postfix increment of x: %d\n", y);
    printf("Value of x after postfix increment of x: %d\n", x);

    // increment operator in prefix form
    y = ++x;
    printf("\nValue of y after prefix increment of x: %d\n", y);
    printf("Value of x after prefix increment of x: %d\n", x);

    // decrement operator in postfix form

    y = x--;
    printf("\nValue of y after postfix decrement of x: %d\n", y);
    printf("Value of x after postfix decrement of x: %d\n", x);

    // decrement operator in prefix form

    y = --x;
    printf("\nValue of y after prefix decrement of x: %d\n", y);
    printf("Value of x after prefix decrement of x: %d\n", x);

    // logical NOT
    x = 10,y = 11;
    z = !(x == y); 
    printf("\n\nif the conditon is \"!(%d == %d)\"  \'TRUE : 1\' or \'FLASE : 0\': %d",x,y,z);
 
    return 0;
}