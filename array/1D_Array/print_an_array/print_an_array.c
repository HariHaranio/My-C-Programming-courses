#include<stdio.h>

// C program to print an array in order and in reverse order.
// Using sizeof operator to find the size of an array.

int main() {

    int a[5] = {10, 20, 30, 40, 50};

    int size = sizeof(a) / sizeof(a[0]);  // to find the size of an array.

    printf("\nThe size of an array: %d \n",size);

    printf("\n\nPrinting the Elements in an array in Order: ");

    for  (int i = 0;i < size;i++){
        printf("%i ",a[i]);
    }

    printf("\n\nPrinting the Elements in an array in reverse Order: ");

    for  (int i = size-1;i >= 0;i--){
        printf("%i ",a[i]);
    }

    return 0;
}