#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int *array1;
    int *array2;
}data;

int main(){
    
    data x;
    data y;

    x.array1 = malloc(sizeof(int) * 5);
    y.array2 = malloc(sizeof(int) * 5);

    int size = sizeof(x.array1); 

    printf("Enter a elements into the array 1:");
    for (int i = 0; i < size; i++){
        scanf("Array [i] = %i",&x.array1);
    }
    
    printf("Enter a elements into the array 2:");
    for (int i = 0; i < size; i++){
        scanf("Array [i] = %i",&y.array2);
    }

    printf("\nElements i entered into the array 1:");
    for (int i = 0; i < size; i++){
        printf("%i ",x.array1);
    }
    printf("\nElements i entered into the array 2:");
    for (int i = 0; i < size; i++){
        printf("%i ",y.array2);
    }
    return 0;
}
