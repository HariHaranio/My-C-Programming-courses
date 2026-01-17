/*3️.Pointer reassignment (people mess this up)
    Write a program with:
        Two integers a and b
        One pointer.
    First make the pointer point to a, modify a
    Then make it point to b, modify b
    Print both values at the end.
You’re testing whether you understand what actually changes.

*/
#include<stdio.h>

int main(){
    int a = 1 ,b = 2;
    int *p;

    printf("\nUnmodify a:%d\n",a);
    printf("\nUnmodify b:%d\n",b);
    p = &a;
    *p = 3;

    p = &b;
    *p = 4;
    printf("\nmodify a:%d\n",a);
    printf("\nmodify b:%d\n",b);
    
}