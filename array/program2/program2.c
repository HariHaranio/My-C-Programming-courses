#include <stdio.h>
// C program to find the sum, largest and smallest number in an array.
// new change
int main() {

    int Numbers[5], sumArray = 0,i,largeNumber,smallNumber;

    printf("Enter the Number's:");

    for (i = 0;i < 5;i++){
        scanf("%d",&Numbers[i]);
    }

    for (i = 0;i < 5;i++){
        sumArray = sumArray + Numbers[i];
    }

    largeNumber = Numbers[0];
    for (i = 1;i < 5;i++){
        if (largeNumber < Numbers[i]){
            largeNumber = Numbers[i];
        }
    }


    smallNumber = Numbers[0];
    for (i = 1;i < 5;i++){
        if (smallNumber > Numbers[i]){
            smallNumber = Numbers[i];
        }
    }

    printf("\nthe Sum of the Array: %d\n",sumArray);
    printf("\nThe large number is: \%d\n",largeNumber);
    printf("\nThe Small number is: \%d\n",smallNumber);
    return 0;
}
