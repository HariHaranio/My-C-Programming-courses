#include<stdio.h>
#include<stdlib.h>
// Find the sum of all elements in a 2D array
int main(){
    int a[2][3] ={{1,2,7},{8,9,6}}, totalSum = 0;
    int rwoSum = 0;
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            totalSum = totalSum + a[i][j];
        }
    }

    printf("the sum of all elements in a 2D array:%d",totalSum);
} 