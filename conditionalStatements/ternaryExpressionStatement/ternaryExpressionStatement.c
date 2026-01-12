#include<stdio.h>

int main(){
    int x;
    printf("ternary operator to check if x is equal to 5\n");
    printf("Enter an integer: ");
    scanf("%d", &x);

    int result = (x == 5) ? printf("%d is equal to 5\n", x) 
                          : printf("%d is not equal to 5\n", x);
    return 0;
}