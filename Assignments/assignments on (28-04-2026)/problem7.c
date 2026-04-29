/*
assignments on (28-04-2026)
problem 7: Write a program to read two strings through the keyboard like the following example 
       and replace any word of  the second string with the first string.
      Ex: Input:-   Fist String    : “Tomorrow”
                    Second String  : “Today  is  Sunday”
                     Replace word  : “Today”.

            Output:-  “Tomorrow is Sunday”
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str_1[50], str_2[100], replaceWord[50];
    char result[200];

    int i, j = 0, k;

    printf("Enter first string: ");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Enter second string: ");
    fgets(str_2, sizeof(str_2), stdin);

    printf("Enter word to replace: ");
    fgets(replaceWord, sizeof(replaceWord), stdin);

    str_1[strcspn(str_1, "\n")] = '\0';
    str_2[strcspn(str_2, "\n")] = '\0';
    replaceWord[strcspn(replaceWord, "\n")] = '\0';

    for (i = 0; str_2[i] != '\0'; ) {

        if (str_2[i] == ' ') {
            result[j++] = ' ';
            i++;
            continue;
        }

        char temp[50];
        int t = 0;

        while (str_2[i] != ' ' && str_2[i] != '\0') {
            temp[t++] = str_2[i++];
        }
        temp[t] = '\0';

        if (strcmp(temp, replaceWord) == 0) {
            for (k = 0; str_1[k] != '\0'; k++) {
                result[j++] = str_1[k];
            }
        } else {
            for (k = 0; temp[k] != '\0'; k++) {
                result[j++] = temp[k];
            }
        }
    }

    result[j] = '\0';

    printf("Resulting string: %s\n", result);

    return 0;
}