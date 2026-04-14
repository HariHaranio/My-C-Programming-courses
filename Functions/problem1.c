#include<stdio.h>

int sum(int a, int b);// Function prototype for sum
int sub(int a,int b);// Function prototype for sub
int mul(int a,int b);// Function prototype for mul
float div(int a,int b);// Function prototype for div

int main() {
    int a, b, result;
    float c;
    int getchar;

    printf("\nTo Do the Arthamatic opperation for a & b:");
    printf("\nPlease! Selecte the following operation:");
    printf("\n\t1.Addition\n\t2.Subration\n\t3.Multipication\n\t4.Division");
    printf("\nEnter your operation:");
    scanf("%d",&getchar);

    printf("Enter the values for a and b: ");
    scanf("%d %d", &a, &b);

    if (getchar == 1) {
        result = sum(a,b);
        printf("The sum of %d + %d = %d",a,b,result);
    }else if (getchar == 2) {
        result = sub(a,b);
        printf("The sub of %d - %d = %d",a,b,result);   
    }else if (getchar == 3) {
        result = mul(a,b);
        printf("The mul of %d * %d = %d",a,b,result);
    }
    else if (getchar == 4) {
        if (b != 0) {
            c = div(a,b);
            printf("The div of %d / %d = %.2f",a,b,c);
        } else {
            printf("Error: Division by zero is not allowed.");
        }
    } else {
        printf("Invalid operation selected.");
    }
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int mul(int a,int b){
    return a * b;
}

float div(int a,int b){
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero is not allowed.");
        return 0; // Return 0 or handle as needed
    }
}