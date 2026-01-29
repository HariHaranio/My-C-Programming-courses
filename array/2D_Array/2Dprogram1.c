#include<stdio.h>
#include<stdlib.h>
// Program to print 2D array of 2 row & 2 coloum (2 x 2)
// Using Nested for loop.
int main(){
    int a[2][2] = {{1,2},{3,4}};
    int row = sizeof(a)/sizeof(a[0]);
    int col = sizeof(a[0])/sizeof(a[0][0]);

    printf("\nThe 2D array of 2 row & 2 coloum (2 x 2):\n");

    for (int i = 0; i < row; i++){
        for (int j = 0;j < col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}