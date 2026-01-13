#include<stdio.h>
int main() {
    int number;
    do {
      printf("Enter a positive number: ");
      scanf("%d", &number);
    } while (number > 0);
}