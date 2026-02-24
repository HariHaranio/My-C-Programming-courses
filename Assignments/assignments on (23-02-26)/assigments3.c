#include<stdio.h>
// assignment date :23 - 02 - 2026
// check whether the number is positive, negative or zero

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 0){
        printf("The number is positive\n");
    }
    else if(num < 0){
        printf("The number is negative\n");
    }
    else{
        printf("The number is zero\n");
    }

    return 0;
}