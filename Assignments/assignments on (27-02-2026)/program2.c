#include<stdio.h>
// write a c program to check whether a year is a leap year or not.
int main(){
    int year;

    printf("Enter a year to check whether it is a leap year or not:");
    scanf("%d",&year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("\nGiven year '%d' is a leap year",year);
            }else{
                printf("\nGiven year '%d' is not a leap year",year);
            }
        }else{
            printf("\nGiven year '%d' is a leap year",year);
        }
    }else{
        printf("\nGiven year '%d' is not a leap year",year);
    }
    
    return 0;
}
