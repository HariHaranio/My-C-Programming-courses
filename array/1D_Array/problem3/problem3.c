#include<stdio.h>

// C program to add two arrays of same size element by element.
// The program takes elements of the arrays as input from the user.
// The result is stored in a third array and printed.
// This program uses a do-while loop to print the resulting array.

int main(){
    int arr1[5], arr2[5], sumarr[5], i;
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("\nEnter the Elements of an array 1:");
    for (i = 0;i < size;i++){
        scanf("%i",&arr1[i]);
    }

    printf("\nEnter the Elements of an array 2:");
    for (i = 0;i < size;i++){
        scanf("%i",&arr2[i]);
    }

    printf("\n\n");

    printf("\nThe elements to of an array 1: [");
    for (i = 0; i < size;i++){
        printf("%i, ",arr1[i]);
    }printf("]");

    printf("\nThe elements to of an array 2: [");
    for (i = 0; i < size;i++){
        printf("%i, ",arr2[i]);
    }printf("]");

    for (i = 0;i < size;i++){
        sumarr[i] = arr1[i] + arr2[i];
    }

    printf("\nThe elements of an array: [");
    i = 0;
    do{
        printf("%i, ",sumarr[i]);
        i++;
    } while (i < size);
    printf("]");
    
    return 0;
}