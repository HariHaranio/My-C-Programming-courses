#include<stdio.h>

int main(){
    int a = 5;
    float b = 73.3120;
    char s = 'S';
    double pi = 3.141591234;

    printf("The int a = %d\n",a);
    printf("The folat b = %.2f \n",b);
    printf("The char s = %c\n",s);
    printf("The double pi = %lf\n",pi);
    
    printf("The address of int a = %p\n",a);
    printf("The address of float b = %p\n",b);
    printf("The address of char s = %p\n",s);
    printf("The address of double pi = %p\n",pi);
    
    return 0;
}