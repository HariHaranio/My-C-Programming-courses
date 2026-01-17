/*4. Pointer to pointer (mandatory pain)
Write a program that:
    Uses int, int*, and int**
    Changes the integer value using the double pointer
    Prints all three values and addresses
*/

#include<stdio.h>

int main(){
    int a  = 1;
    int *singlePointer;
    int **doublePointer;

    singlePointer = &a;

    doublePointer = &singlePointer;

    printf("\nThe value of \'a\' befor changing through double pointer:%d",a);
    printf("\nThe address of \'a\':%p",&a);
    printf("\nThe value of single pointer (address of a):%p",singlePointer);
    printf("\nThe address of single pointer:%p",&singlePointer);
    printf("\nThe value of double pointer (address of single pointer):%p",doublePointer);
    printf("\nThe address of double pointer:%p",&doublePointer);
    
    **doublePointer = 2;

    printf("\nThe value of \'a\' after changing through double pointer:%d",a);
    
    return 0;
}