#include<stdio.h>
// assignment date :27 - 02 - 2026
// Write a C program to check whether a given number is greater than 100.
int main(){
    int getNum;

    printf("Enter a number to check whether it is greater than 100:");
    scanf("%d",&getNum);

    if (getNum > 100){
        printf("\nGiven number '%d' is greater than 100",getNum);
    }else{
        printf("\nGiven number '%d' is not greater than 100",getNum);
    }
    
    return 0;
}