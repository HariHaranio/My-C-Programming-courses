#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Condition? True stmt: False stmt;
    // Ternary Operator Example
    int getNumber;

    printf("Enter a number: ");
    scanf("%i",&getNumber);

    printf("\nYou entered the number: %i",getNumber);

    (getNumber > 0 ? printf("\nThe number \'%i\' is positive",getNumber) : printf("\nThe number \'%i\' is negative",getNumber));

    (getNumber % 2 == 0 ? printf("\nThe number \'%i\' is Even",getNumber): printf("\nThe number \'%i\' is Odd",getNumber));

    return 0;
}
