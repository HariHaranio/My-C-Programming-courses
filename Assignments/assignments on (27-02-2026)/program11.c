#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check eligibility for admission:
//         Age ≥ 18
//         Marks ≥ 60
int main()
{
    int getAge, getMarks;
    printf("Enter your age: ");
    scanf("%d", &getAge);
    printf("Enter your marks: ");
    scanf("%d", &getMarks);
    
    if (getAge >= 18 && getMarks >= 60) {
        printf("You are eligible for admission.\n");
    } else {
        printf("You are not eligible for admission.\n");
    }

    return 0;
}