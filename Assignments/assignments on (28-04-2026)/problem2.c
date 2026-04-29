/*
assignments on (28-04-2026)
problem 2: write a c program to delete a desired characterin a given string.array.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    char charToDelete;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    printf("Enter the character to delete:");
    scanf(" %c", &charToDelete); // Note the space before %c to consume any leftover whitespace

    int length = strlen(str);
    char result[10];
    int j = 0;

    for (int i = 0; i < length; i++){
        if (str[i] != charToDelete){
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after deleting '%c': %s\n", charToDelete, result);
    return 0;
}