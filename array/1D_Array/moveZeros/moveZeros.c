#include <stdio.h>

int main() {
    int a[10] = {0,1,2,0,3,0,0,8,0,10};
    int b[10];
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0;i < size;i++){
        if(a[i] == 0){
            b[i] = a[i];
        }else{
            b[i] = a[i];
        }
    }

    for (int i = 0;i < size;i++){
        printf("%i, ",b[i]);
    }
    return 0;
}