#include <stdio.h>
#include <stdlib.h>
// C program to sort an array in ascending and descending order.

int main()
{
    int a[5],i,j;
    printf("Enter a numbers:");
    int size = sizeof(a)/sizeof(a[0]);

    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    for (i=0;i < size;i++){
        for (j=0;j< size;j++){
            if (a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nArray in ascending order:\n");

    for (i = 0; i <size;i++){
        printf("%d ",a[i]);
    }

    for (i=0;i < size;i++){
        for (j=0;j< size;j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nArray in descending order:\n");

    for (i = 0; i <size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}