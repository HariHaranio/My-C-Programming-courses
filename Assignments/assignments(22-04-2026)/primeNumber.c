/*
 * assignments - 22-04-2026
 * sort and display prime numbers
*/
int is_prime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // num is divisible by a number other than 1 and itself
    }
    return 1; // num is prime
}

#include <stdio.h>

int main(){
    int a[10] = {0};
    int size = sizeof(a)/sizeof(a[0]);
    int result = 0;

    for (int i = 1; i <= size; i++){
        a[i] = i;
    }
    printf("Array: [");
    for (int i = 1; i <= size; i++){
        printf("%d, ",a[i]);
    }
    printf("]");
    
    printf("\n");

    for (int i = 1; i <= size; i++) {
        result = (a[i] <= 1) ? 0 : is_prime(a[i]);
        if (!result) {
            // Shift elements left to remove non-prime
            for (int j = i; j < size - 1; j++) {
            a[j] = a[j + 1];
            }
            a[size - 1] = 0;
            size--;
            i--;
        }
    }

    printf("Array u: [");
    for (int i = 1; i <= size; i++){
        printf("%d, ",a[i]);
    }
    printf("]");

    return 0;
}