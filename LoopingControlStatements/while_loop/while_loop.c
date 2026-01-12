#include<stdio.h>

int main(){
    int countDown;

    printf("\nEnter a count down:");
    scanf("%i",&countDown);

    while (countDown >= 0){
        printf("%i\n",countDown);
        countDown--;
    }
    printf("\nWhile is done");
}