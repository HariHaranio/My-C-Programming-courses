#include <stdio.h>

int main(){
    int a = 10 ,b = 3,c;

    // Using assignment operators
    c = a + b; // c = a + b
    printf("\nAdd two operands \n c = a + b = %d\n", c); 

    c = a - b; // c = a - b
    printf("\nSubtract the second operand from the first operand.\n c = a - b = %d\n", c);

    c = a * b; // c = a * b
    printf("\nMultiply two operands.\nc = a * b = %d\n", c);

    c = a / b; // c = a / b
    printf("\nDivide the first operand by the second operand.\nc = a / b = %d\n", c);
    
    c = a % b; // c = a % b
    printf("\nCalculate the remainder when the first operand is divided by the second operand.\nc = a %% b = %d\n", c);
    
    a += b; // a = a + b
    printf("\nAdds b to a and updates a with the new value\n a += b, a = %d\n", a); 

    a -= b; // a = a - b
    printf("\nSubtracts b from a and updates a\n a -= b, a = %d\n", a);

    a *= b; // a = a * b
    printf("\nMultiplies a by b and updates a\n a *= b, a = %d\n", a);

    a /= b; // a = a / b
    printf("\nDivides a by b and updates a (integer division)\n a /= b, a = %d\n", a);

    a %= b; // a = a % b
    printf("\nUpdates a with the remainder of a divided by b\n a %%= b, a = %d\n", a);

    return 0;
}