#include<stdio.h>
// write a program to reverse an array
// using do while loop
int main(){
    int a[5],i = 0;
    int size = sizeof(a)/sizeof(a[0]);

    printf("Enter %d elements into the array:",size);
    do{
        scanf("%i",&a[i]);
        i++;
    } while (i < size);

    i = size - 1; // Initialize i to the last index

    printf("\nThe elements in reverse order: [");
    do{
        printf("%i, ",a[i]);
        i--;
    }while(i >= 0);
    printf("]");
    
    return 1;
}