/*
Write a C program to copy one string into another
using pointers without using built-in string functions.
*/

#include <stdio.h>

void copyString(char *source, char *destination);

int main() {

    char source[10] = "hari";
    char destination[10];

    copyString(source, destination);

    printf("Source String      : %s\n", source);
    printf("Copied String      : %s\n", destination);

    return 0;
}

void copyString(char *source, char *destination) {

    while (*source != '\0') {

        *destination = *source;

        source++;
        destination++;
    }

    *destination = '\0';
}