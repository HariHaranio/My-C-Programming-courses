/*
assignments on (28-04-2026)
problem 4: Write a program to remove the conjucutive spaces in a given string line.

*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char spacesRemoved[100];
    int j = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int stringLength = strlen(str);

    for (int i = 0; i < stringLength; i++){
        if (str[i] != ' '){
            spacesRemoved[j++] = str[i];
        }
    }
    spacesRemoved[j] = '\0';

    printf("String after removing spaces: %s\n", spacesRemoved);   
    return 0;
}