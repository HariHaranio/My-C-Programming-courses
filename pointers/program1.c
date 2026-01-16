#include <stdio.h>
/*1️.Address & Dereference (warm-up, no excuses)
    Write a program that:
        Declares an int
        Declares a pointer to it
    Prints:
        value of the int
        address of the int
        value stored in the pointer
        value using dereferencing
    If any two outputs confuse you, stop and fix your model.
*/
int main() {
    int a = 5;
    int *p = &a;
    *p = 20;
    printf("value of the int:%d\n",a);
    printf("address of the int:%p\n",&a);
    printf("value stored in the pointer:%p\n",p);
    printf("value using dereferencing:%d",*p);

    return 0;
}