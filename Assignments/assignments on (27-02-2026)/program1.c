#include<stdio.h>
// assignment date :27 - 02 - 2026
// write a program to check whether a number is postive or negative.
int main(){
    int getNum;

    printf("Enter a number to check whether a number is postive or negative:");
    scanf("%d",&getNum);

    if (getNum > 0){
        printf("\nGiven number '/ %d '/ is postive",getNum);
    }else{
        printf("\nGiven number '/ %d '/ is negative",getNum);
    }
    
    return 0;
}