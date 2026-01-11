#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;

    printf("Size of int: %d bytes\n", sizeof(i));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of char: %d bytes\n", sizeof(c));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of long: %d bytes\n", sizeof(long));
    printf("Size of short: %d bytes\n", sizeof(short));
    printf("Size of long long: %d bytes\n", sizeof(long long));
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("Size of unsigned char: %d bytes\n", sizeof(unsigned char));
    printf("Size of pointer: %d bytes\n", sizeof(void*));
    
    return 0;
}