#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check whether a student passes all subjects (each subject ≥ 40).
int main()
{
    int getsubject1, getsubject2, getsubject3;
    printf("Enter marks for subject 1: ");
    scanf("%d", &getsubject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &getsubject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &getsubject3);
    
    if (getsubject1 >= 40 && getsubject2 >= 40 && getsubject3 >= 40) {
        printf("Congratulations! You have passed all subjects.\n");
    } else {
        printf("Sorry! You have failed in one or more subjects.\n");
    }

    return 0;
}