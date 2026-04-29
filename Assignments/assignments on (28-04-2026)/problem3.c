/*
assignments on (28-04-2026)
problem 3: Write a program to delete the duplicate characters in a given string.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    char isDuplicate;
    char result[10];
    int j = 0;

    printf("Enter a string:");
    scanf("%9s",str);
    str[strcspn(str, "\n")] = '\0';

    int stringLength = strlen(str);


    for (int i = 0; i < stringLength; i++){
        isDuplicate = 0;
        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                isDuplicate = 1;
                break;
            }
    }
        if(!isDuplicate){
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

    printf("string after deleting duplicate characters: %s\n", result);

    return 0;
}