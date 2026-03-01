#include<stdio.h>
/* assignment date :27 - 02 - 2026
// Write a C program to assign grades based on marks:   
    90–100 → A
    80–89 → B
    70–79 → C
    Below 70 → Fail
*/

int main(){
    int marks;

    printf("Enter your marks to assign grades:");
    scanf("%d",&marks);

    if (marks >= 90 && marks <= 100){
        printf("\nYour grade is: A");
    }else if (marks >= 80 && marks <= 89){
        printf("\nYour grade is: B");
    }else if (marks >= 70 && marks <= 79){
        printf("\nYour grade is: C");
    }else if (marks < 70){
        printf("\nYou have failed.");
    }else{
        printf("\nInvalid marks entered.");
    }
    
    return 0;
}