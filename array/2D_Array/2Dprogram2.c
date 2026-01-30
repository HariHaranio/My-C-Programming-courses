#include<stdio.h>
#include<stdlib.h>
// Program to perform addition, subtraction, multiplication and division of two 2D arrays of size 2x3.

int main(){
    int a[2][3] = {{1,2,7},{8,9,6}}, b[2][3] = {{3,8,7},{1,10,4}};
    int i,j;
    int rowsA = sizeof(a) / sizeof(a[0]);
    int colsA = sizeof(a[0]) / sizeof(a[0][0]);

    printf("\nAddition:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
    printf("\n");
    }

    printf("\nSubtraction:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", a[i][j] - b[i][j]);
        }
    printf("\n");
    }

    printf("\nMultiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", a[i][j] * b[i][j]);
        }
    printf("\n");
    }

    printf("\nDivision:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", a[i][j] / b[i][j]);
        }
    printf("\n");
    }
    return 0;
}