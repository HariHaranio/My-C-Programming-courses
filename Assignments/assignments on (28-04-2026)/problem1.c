/*
assignment on 28-04-2026
problem 1: Write a C program to check the given string is palindrome or not. 
A palindrome is a string that reads the same forward and backward, such as "racecar", "madam", or "abba".
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    printf("Enter a string:");
    scanf("%9s",str);

    int stringLength = strlen(str);
    int isPalindrome = 1; 
    for (int i = 0; i < stringLength / 2; i++){
        if (str[i] != str[stringLength - 1 - i]){
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome){
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}