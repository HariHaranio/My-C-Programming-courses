#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, i,Temp;
    int size = sizeof(a) / sizeof(a[0]);
    int left = 0, right = size -1 ;
    int temp[10];
    

    for (i=0;i<size/2;i++){
            Temp = a[i];
            a[i] = a[size-1-i];
            a[size-1-i] = Temp;
    }

    for (i=0;i < size;i++){
        printf("%d, ",a[i]);
    }

    printf("\n");
    return 0;
}