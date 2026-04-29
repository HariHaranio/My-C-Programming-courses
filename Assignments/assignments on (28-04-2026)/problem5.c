/*
assignments on (28-04-2026)
problem 5:Write a program to sort a given string in ascending order.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    int stringLength = strlen(str);

    for (int i = 0; i < stringLength - 1; i++) {
        for (int j = 0; j < stringLength - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("String after sorting: %s\n", str);
    return 0;
}