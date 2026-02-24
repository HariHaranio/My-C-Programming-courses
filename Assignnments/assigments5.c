#include<stdio.h>
// assignment date :23 - 02 - 2026
// check whether the number is divisible by both  3 and 5.

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }
    
    return 0;
}