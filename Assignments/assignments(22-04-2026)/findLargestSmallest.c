/*
* assignments - 22-04-2026
* Problem Statement: write a program to find the largest and smallest number in an array.
*/
#include <stdio.h>

int main() {

    int Numbers[5],i,largeNumber,smallNumber;
    int size = sizeof(Numbers) / sizeof(Numbers[0]);
    printf("Enter the Number's:");

    for (i = 0;i < size;i++){
        scanf("%d",&Numbers[i]);
    }

    largeNumber = Numbers[0];
    for (i = 1;i < size;i++){
        if (largeNumber < Numbers[i]){
            largeNumber = Numbers[i];
        }
    }

    smallNumber = Numbers[0];
    for (i = 1;i < size;i++){
        if (smallNumber > Numbers[i]){
            smallNumber = Numbers[i];
        }
    }

    printf("\nThe large number is: \%d\n",largeNumber);
    printf("\nThe Small number is: \%d\n",smallNumber);
    return 0;
}
