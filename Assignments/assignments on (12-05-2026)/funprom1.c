/*
Write a C program to create a function that counts the number of vowels in a given string.
*/


#include <stdio.h>
#include<string.h>

int countVowels(char a[100]);

int main(){

    char a[100];
    printf("Enter a string :");
    scanf("%s",a);

    printf("\nThe total number of vowels in the string: %d",countVowels(a));

    return 0;
}

int countVowels(char a[100]){
    int count = 0;
    int size = strlen(a);

    for (int i = 0; i < size; i++){
        if (strchr("aeiouAEIOU",a[i])){
            count++;
        } 
    }
    return count;
}