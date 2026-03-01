#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check whether a character is:
/*  Uppercase letter
    Lowercase letter
    Digit
    Special character
*/
int main()
{
    char getChar;
    printf("Enter a character: ");
    scanf("%c", &getChar);

    if (getChar >= 'A' && getChar <= 'Z') {
        printf("The character is an uppercase letter.\n");
    } else if (getChar >= 'a' && getChar <= 'z') {
        printf("The character is a lowercase letter.\n");
    } else if (getChar >= '0' && getChar <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }

    return 0;
}