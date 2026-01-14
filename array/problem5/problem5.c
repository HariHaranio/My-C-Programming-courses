#include<stdio.h>
// Write a program in C to find the largest element in an array.

int main(){
    int a[5],i,max;
    int size = sizeof(a) /sizeof(a[0]);

    printf("Enter %d elements into the array:",size);

    for (i = 0; i < size;i++){
        scanf("%i",&a[i]);
    }

    max = a[0];

    for (i = 0; i < size;i++){
        if (max < a[i]){
            max = a[i];
        }
    }

    printf("\nThe largest element in the array: %d\n", max);
    return 0;
}