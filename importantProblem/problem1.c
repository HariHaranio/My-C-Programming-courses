#include<stdio.h>

int main(){
    int a = 5, b = 5;
    int sum,difference;

    sum = a - (~b) - 1;
    difference  = a + (~b) + 1;
    printf("sum : %d\n",sum);
    printf("difference : %d",difference);
    
    return 0;
}