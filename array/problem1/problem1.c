#include<stdio.h>

// C program to calculate the total and average marks of a student using arrays.
// Using sizeof operator to find the size of an array.
// The program takes marks as input from the user.

int main(){
    int marks[5],i,sum = 0,avg;
    int size = sizeof(marks) /sizeof(marks[0]);
    
    printf("\nEnter the marks of the student:");

    for (i = 0;i < size;i++){
        scanf("%i",&marks[i]);
    }

    printf("\nMarks you Enterd:");

    for (i = 0; i < size; i++){
        printf("%i ",marks[i]);
    }
    
    for (i = 0; i< size;i++){
        sum = sum + marks[i];
    }
    printf("\nThe total marks obtained by the student: %i",sum);

    avg = sum/size;
    printf("\nThe average marks obtained by the student: %i",avg);

    return 0;
}