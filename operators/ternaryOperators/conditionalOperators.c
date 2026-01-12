#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Condition? True stmt: False stmt);
    int getNumber;
    printf("\nThe conditional operator is the only ternary operator in C.\n");
    printf("\nIt is a conditional operator that we can use in place of if..else statements.\n");
    printf("syntax: expression1 ? Expression2 : Expression3;\n");

    printf("Enter a number: ");
    scanf("%i",&getNumber);


    (getNumber > 0 ? printf("\nthe number \'%i\' is postive",getNumber) : printf("\nthe number \'%i\' is negative",getNumber));

    (getNumber % 2 == 0 ? printf("\nthe number \'%i\' is Even",getNumber): printf("\nthe number \'%i\' is Odd",getNumber));

    return 0;
}
