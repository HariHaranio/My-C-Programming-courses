#include<stdio.h>
// How to find the maximum and minimum elements?
int main(){
    int a[5],i,max,min;
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

    printf("\nThe maximum element in the array: %d\n", max);

    min = a[0];
    for (i = 0; i < size;i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    printf("\nThe minimum element in the array: %d\n", min);
    return 0;
}