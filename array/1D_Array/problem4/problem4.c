#include<stdio.h>
// Write a program in C to calculate the sum of all elements in an array.
// this code uses do...while loop to take array input from user.

int main (){
    int a[5], i,sum = 0;
    int size = sizeof(a) / sizeof(a[0]);


    printf("Enter %d elements of the array:", size);

    i = 0;
    do{
        scanf("%i",&a[i]);
        i++;
    }while(i < size);

    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    printf("\nSum of all elements in the array: %d\n", sum);
    return 0;
}