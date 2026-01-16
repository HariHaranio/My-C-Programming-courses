/*2.Modify value using pointer
    Write a program where:
    An int is initialized to 10
    A pointer modifies it to 50
    Print the value before and after
Do NOT modify the variable directly.*/
#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;

    printf("before\n\t");
    printf("An int is initialized with %d\n",a);

    *p = 50;

    printf("After\n\t");
    printf("A pointer modifies it to %d",a);
    return 0;
}