#include<stdio.h>

int main(){
    int i,getNumber;

    printf("Enter a number: ");
    scanf("%d", &getNumber);

    for(i=1; i<=getNumber; i++){
        printf("Iteration %d\n", i);
        ++i;
    }
}