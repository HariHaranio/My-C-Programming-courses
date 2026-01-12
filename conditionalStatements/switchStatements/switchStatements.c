#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c;
    char getchar;

    printf("\nTo Do the Arthamatic opperation for a & b:");
    printf("\nPlease! Selecte the following operation:");
    printf("\n\t1.Addition = \'+\'\n\t2.Subration = \'-\'\n\t3.Multipication = \'*\'\n\t4.Division = \'/\'");
    printf("\nEnter your operation:");
    scanf("%c",&getchar);

    printf("\nPlease! Enter the Value for \'a\' : ");
    scanf("%i",&a);
    printf("\nPlease! Enter the Value for \'b\' : ");
    scanf("%i",&b);

    switch (getchar){
        case '+':
            c = a + b;
            printf("\nThe Addition of %i + %i is :%.2f",a,b,c);
            break;
        case '-':
            c = a - b;
            printf("\nThe Subtraction of %i - %i is :%.2f",a,b,c);
            break;
        case '*':
            c = a * b;
            printf("\nThe Multiplication of %i * %i is :%.2f",a,b,c);
            break;
        case '/':
            c = a / b;
            printf("\nThe Division of %i / %i is :%.2f",a,b,c);
            break;
        default:
            printf("\nInvalid char");
    }
    return 0;
}
