#include<stdio.h>
/*
assignment date :27 - 02 - 2026
Write a C program to check whether a number is:
    Positive,Negative,Zero
*/
int main(){
    int getNum;

    printf("Enter a number to check whether it is positive, negative or zero:");
    scanf("%d",&getNum);

    if (getNum > 0){
        printf("\nGiven number '%d' is positive",getNum);
    }else if (getNum < 0){
        printf("\nGiven number '%d' is negative",getNum);
    }else{
        printf("\nGiven number '%d' is zero",getNum);
    }
    
    return 0;
}