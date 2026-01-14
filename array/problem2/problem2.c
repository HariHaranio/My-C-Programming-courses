#include <stdio.h>
// C program to count even and odd numbers in an array.
// The program takes elements of the array as input from the user.
// this also prints even and odd numbers from the array.
int main(){
    int a[10], i,evenNum = 0,oddNum = 0;
    int size = sizeof(a) /sizeof(a[0]);

    printf("\nEnter a elements into the array:");

    for (i = 0;i < size; i++){
        scanf("%i",&a[i]);
    }

    printf("\nThe elements to of an array: [");

    for (i = 0; i < size;i++){
        printf("%i, ",a[i]);
    }printf("]");

    printf("\nThe even numbers of array: [ ");
    for (i = 0; i < size; i++)
    {
        if (a[i] %2 == 0 ){
            printf("%i, ",a[i]);
            evenNum++;
        }    
    }printf("]");

    printf("\nThe odd numbers of an array: [ ");
    for (i = 0;i < size; i++){
        if (a[i] % 2 != 0){
            printf("%i, ",a[i]);
            oddNum++;
        }
    }printf("]");

    printf("\nThe total number of even number in an array: %i",evenNum);
    printf("\nThe total number of odd number in an array: %i",oddNum);
    
    
    return 0;
}