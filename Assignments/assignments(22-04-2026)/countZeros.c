/*
assignments(22-04-2026) - countZeros.c
Write a program in C to count the total number of zeros in an array.
*/

#include<stdio.h>

int main(){
    int a[10] = {0,0,0,1,0,31,0,1,0,0};
    int size = sizeof(a)/sizeof(a[0]);
    int countZero = 0;

    for (int i = 0; i < size; i++){
        (a[i] == 0) ? countZero++ :  0;
    }
    
    printf("The total Zero's in the array: %d",countZero);

    return 0;
}