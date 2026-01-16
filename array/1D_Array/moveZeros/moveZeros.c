#include <stdio.h>
// C program to move all zeros to the end of an array
int main() {
    int a[10] = {0, 1, 0, 3, 12, 0, 5, 0, 7, 0};
    int i,count = 0;
    int size = sizeof(a) / sizeof(a[0]);

    for (i=0;i<size;i++){
        if (a[i] != 0){
            a[count] = a[i];
            count++;
        }
        a[i] = 0;
    }
    for (i = 0; i < size; i++){
        printf("%d, ",a[i]);
    }
    return 0;
}