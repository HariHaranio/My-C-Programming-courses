/*
assignments on (28-04-2026)
problem 6:Write a program to accept two strings from user into two character array and copy one 
        by one character into another destination array.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char str_1[10],str_2[10];
    char str_3[10];
    int i,j = 0;

    printf("Enter a string 1:");
    fgets(str_1, sizeof(str_1), stdin);

    printf("Enter a string 2:");
    fgets(str_2, sizeof(str_2), stdin);

    str_1[strcspn(str_1, "\n")] = '\0';
    int stringLength = strlen(str_1);

    for (i = 0; str_1[i] != '\0'; i++) {
        str_3[j++] = str_1[i];
    }

    for (i = 0; str_2[i] != '\0'; i++) {
        str_3[j++] = str_2[i];
    }

    str_3[j] = '\0';
    printf("After copying the srt_1 & str_2 into str_3: %s",str_3);

}
