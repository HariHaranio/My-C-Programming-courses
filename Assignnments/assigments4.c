#include<stdio.h>
// find largest of two numbers using ternary operator

int main(){
    int a,b;
    int largest;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    largest = (a > b) ? a : b;

    printf("The largest number is: %d\n",largest);

    return 0;
}