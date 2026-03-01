#include<stdio.h>
// assignment date :27 - 02 - 2026
//  Write a C program to find whether a character is a vowel or consonant using switch case.

int main(){
    char getChar;
    printf("Enter a character: ");
    scanf("%c", &getChar);

    switch(getChar)
    {
        case 'a':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'A':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'e':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'E':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'i':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'I':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'o':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'O':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'u':
            printf("%c is a vowel.\n", getChar);
            break;
        case 'U':
            printf("%c is a vowel.\n", getChar);
            break;
        default:
            printf("%c is a consonant.\n", getChar);
    }

    return 0;
}