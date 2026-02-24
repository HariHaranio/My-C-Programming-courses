#include <stdio.h>
// assignment date :23 - 02 - 2026
//this program is to swap two numbers using a third variable

int main(){
    int a = 5,b = 4;
    int temp;

    printf("Before swapping a = %d & b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;

    printf("after swapping a = %d & b = %d\n",a,b);
    return 0;
}