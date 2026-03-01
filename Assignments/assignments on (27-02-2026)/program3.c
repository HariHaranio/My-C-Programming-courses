#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check whether a person is eligible to vote (age ≥ 18).
int main(){
    int age;

    printf("Enter your age to check whether you are eligible to vote or not:");
    scanf("%d",&age);

    if (age >= 18){
        printf("\nYou are eligible to vote.");
    }else{
        printf("\nYou are not eligible to vote.");
    }
    
    return 0;
}