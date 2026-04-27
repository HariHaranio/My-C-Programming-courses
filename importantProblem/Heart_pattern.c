#include<stdio.h>

int main(){
    int n = 5;
    for (int i=1; i<=n; i++) {
        for (int j = 0; j < (2*n-1); j++) {
            if(i == 0 || i == n-1|| j == 0 || j == (2*n-2) || (i+j) == n-1 || (j-i) == n-1+n) {
                printf("*");
            } else {
                printf(" ");
            }
        }  printf("\n");
    }
    return 0;
}